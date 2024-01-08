#include "stack.h"
template <typename T>
Stack<T>::~Stack()
{
    m_stack.clear();
}
template <typename T>
Stack<T>::Stack(const typename Stack<T>::container_type& rhs)
    :   
        m_stack{rhs}
{

}
template <typename T>
Stack<T>::Stack(typename Stack<T>::container_type&& rhs)
    :   
        m_stack{std::move(rhs)}
{

}
template <typename T>
Stack<T>::Stack(const Stack& rhs)
    :
        m_stack{rhs.m_stack}
{

}
template <typename T>
Stack<T>::Stack(Stack&& rhs)
    :
        m_stack {std::move(rhs.m_stack)}
{

}
template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    m_stack = rhs.m_stack;
    return *this;
}
template <typename T>
Stack<T>& Stack<T>::operator=(Stack<T>&& rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    m_stack = std::move(rhs.m_stack);
    return *this;
}
template <typename T>
Stack<T>::value_type Stack<T>::top()
{
    return m_stack.back();
}
template <typename T>
bool Stack<T>::empty()
{
    return m_stack.empty();
}
template <typename T>
Stack<T>::size_type Stack<T>::size()
{
    return m_stack.size();
}
template <typename T>
void Stack<T>::push(Stack<T>::value_type value)
{
    m_stack.push_back(value);
}
template <typename T>
void Stack<T>::pop()
{
    m_stack.pop_back();
}
