#ifndef OPERATEFACTORY_H
#define OPERATEFACTORY_H

#include "operate.h"


template<typename T>
class OperateFactory
{
public:
    OperateFactory(){}
    /**
     * @brief getOperate	get an Operate object according to parameter "c".
     * @param c				maybe one of '+', '-', '*', '/' or others.
     * @return 				an Operate object that can "calculate" an Equation object with operator "c".
     */
    static Operate<T> &getOperate(char c)
    {
        switch(c)
        {
        case '+':
            return AddOperate<T>::getInstance();

        case '-':
            return SubOperate<T>::getInstance();

        case '*':
            return MulOperate<T>::getInstance();

        case '/':
            return DivOperate<T>::getInstance();

        default:
            throw "OprateFactory::getOperate: no corresponding operation";
        }
    }
};

#endif // OPERATEFACTORY_H
