#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "vector.h"
template <typename T>
class Stack
{
public:
    using value_type = T;
    using size_type = size_t;
    using container_type = Vector<value_type>;
    using reference = container_type&;
    using const_reference = const reference;
public:
    Stack() = default;
    explicit Stack(const container_type&);
    explicit Stack(container_type&&);
    Stack(const Stack&);
    Stack(Stack&&);
    ~Stack();
    Stack<T>& operator=(const Stack<T>& rhs);
    Stack<T>& operator=(Stack<T>&& rhs);
    value_type top();
    bool empty();
    size_type size();
    void push(value_type);
    void pop();
private:
    container_type m_stack;
};
#include "stack.cpp"
#endif
