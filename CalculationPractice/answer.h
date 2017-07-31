#ifndef ANSWER_H
#define ANSWER_H

/**
 * the result of an equation, or the given answer of the user.
 */
template<typename T>
class Answer
{
public:
    Answer(): m_answer1(0), m_answer2(0){}
    Answer(T a1): m_answer1(a1), m_answer2(0){}
    Answer(T a1, T a2): m_answer1(a1), m_answer2(a2){}
    bool operator==(const Answer &answer)
    {
        return answer.m_answer1 == this->m_answer1 &&
            answer.m_answer2 == this->m_answer2;
    }



private:
    T m_answer1;
    /* if the operation is division, then this is the remainder; otherwise, it makes no sense. */
    T m_answer2;
};

#endif // ANSWER_H
