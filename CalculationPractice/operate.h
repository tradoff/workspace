#ifndef OPERATE_H
#define OPERATE_H

#include "answer.h"

template<typename T>
class Operate
{
public:
    Operate(){}

    /**
     * @brief operate 		perform an operation between two operands.
     * @param a				the first operand.
     * @param b				the second operand.
     * @return 				a pointer of an Answer object that stores the calculation result of the operation.
     */
    virtual Answer<T> *operate(T a, T b);

    /**
     * @brief getInstance	implemented as a singleton.
     * @return 				the only object of a concrete Operate class.
     */
    static Operate<T> &getInstance();

};

/**
 * add operation
 */
template<typename T>
class AddOperate : public Operate<T>
{
public:
    Answer<T> *operate(T a, T b)
    {
        return new Answer<T>(a + b);
    }

    static Operate<T> &getInstance()
    {
        static AddOperate<T> instance;

        return instance;
    }

private:
    AddOperate(){}
};

/**
 * substract operation
 */
template<typename T>
class SubOperate : public Operate<T>
{
public:
    Answer<T> *operate(T a, T b)
    {
        return new Answer<T>(a - b);
    }

    static Operate<T> &getInstance()
    {
        static SubOperate<T> instance;

        return instance;
    }

private:
    SubOperate(){}

};

/**
 * multiple operation
 */
template<typename T>
class MulOperate : public Operate<T>
{
public:
    Answer<T> *operate(T a, T b)
    {
        return new Answer<T>(a * b);
    }

    static Operate<T> &getInstance()
    {
        static MulOperate<T> instance;

        return instance;
    }

private:
    MulOperate(){}
};

/**
 * divide operatioin
 */
template<typename T>
class DivOperate : public Operate<T>
{
public:
    Answer<T> *operate(T a, T b)
    {
        return new Answer<T>(a / b, (int)a % (int)b);
    }

    static Operate<T> &getInstance()
    {
        static DivOperate<T> instance;

        return instance;
    }

private:
    DivOperate(){}
};


#endif // OPERATE_H
