#ifndef EQUATION_H
#define EQUATION_H

#include <strstream>
#include <fstream>
#include <cstdio>
#include <cstring>
using namespace std;

#include "answer.h"
#include "calculatecontroller.h"
#include "qtcontrol.h"

/*
enum OPERATE{
    ADD = '+', SUB = '-', MUL = '*', DIV = '/'
};
*/

template<typename T>
class Equation
{
public:
    Equation(){}
    Equation(T a, T b, char c): m_oprdA(a), m_oprdB(b), m_oprt(c)
    {
        CalculateController::calculate(*this);
    }
    string toString()
    {
        strstream ss;
        ss<<m_oprdA<<m_oprt<<m_oprdB<<"=?"<<endl;

        return ss.str();
    }

    friend class CalculateController;


private:
    T m_oprdA;
    T m_oprdB;
    char m_oprt;
    Answer<T> *answer;
};

#endif // EQUATION_H
