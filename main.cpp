#include "stack.h"
int main(int argc, char const *argv[])
{
    Vector<int> vec {1,2,3,4,5,6,7,8,9};
    Vector<int> vec1 {234,52,4,12,8};
    Stack<int> st1(vec);
    Stack<int> st2 {std::move(st1)};
    //Stack<int> st1(vec1);
    
    while (!st2.empty())
    {
        std::cout << st2.top() << std::endl;
        st2.pop();
    }
    while (!st1.empty())
    {
        std::cout << st1.top() << std::endl;
        st1.pop();
    }
    
    // while (!st.empty())
    // {
    //     std::cout << st.top() << std::endl;
    //     st.pop();
        
    // }
    // st.push(3);
    // st.push(89);
    // st.push(4);
    // st.push(13);
    //std::cout << st.top();
    return 0;
}

