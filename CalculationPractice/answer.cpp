#include "answer.h"

/* floating point number may be compared in the special way below.  */

template<>
bool Answer<double>::operator==(const Answer<double> &answer)
{
    static const float EPSILON = 1e-6;

    return answer.m_answer1 - this->m_answer1 <= EPSILON &&
        answer.m_answer2 - this->m_answer2 <= EPSILON;
}

template<>
bool Answer<float>::operator==(const Answer<float> &answer)
{
    static const float EPSILON = 1e-6;

    return answer.m_answer1 - this->m_answer1 <= EPSILON &&
        answer.m_answer2 - this->m_answer2 <= EPSILON;
}
