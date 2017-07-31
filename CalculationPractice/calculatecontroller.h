#ifndef CALCULATECONTROLLER_H
#define CALCULATECONTROLLER_H

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

#include "answer.h"
#include "operatefactory.h"
#include "qtcontrol.h"

/* class statement */
template<typename T>
class Equation;

class CalculateController
{
public:
    CalculateController();

    template<typename T>
    /**
     * @brief calculate		calculate the equation to initialize the answer.
     * @param e
     */
    static void calculate(Equation<T> &e)
    {
        try{
            e.answer = OperateFactory<T>::getOperate(e.m_oprt).operate(e.m_oprdA, e.m_oprdB);
        }catch(const char *str){
            qStdOut<<str;
        }
    }

    template<typename T>
    /**
     * @brief checkAnswer	check if user's answer "a" for equation "e" is correct.
     * @param e				the equation, with the right answer included.
     * @param a				user's answer.
     * @return 				true if correct, or false for not.
     */
    static bool checkAnswer(Equation<T> &e, Answer<T> &a)
    {
        return *e.answer == a;
    }

    template<typename T>
    /**
     * @brief randomEquation	initialize an equation object with random data.
     * @param e
     */
    static void randomEquation(Equation<T> &e)
    {
        static const char *oprt = "+-*/";

        srand(time(0));
        e.m_oprdA = rand()%10 + 1;
        e.m_oprdB = rand()%10 + 1;
        e.m_oprt = oprt[rand()%4];
        calculate(e);
    }
};

#include "equation.h"
#endif // CALCULATECONTROLLER_H
