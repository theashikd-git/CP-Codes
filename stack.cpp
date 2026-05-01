#include <iostream>
#include <stack>
using namespace std;

int main()
{
    /*
        Program: Basic operations on C++ STL stack

        Features used:
        - push() → insert element
        - pop() → remove top element
        - top() → access top element
        - empty() → check if stack is empty
    */

    stack<int> st;

    // Pushing elements into stack
    st.push(10);
    st.push(20);
    st.push(-30);
    st.push(-20);

    // Checking if stack is empty
    if (st.empty()) {
        cout << "Stack is empty" << endl;
    }

    // Display top element
    cout << "The top Value: " << st.top() << endl;

    // Remove top element
    st.pop();

    // Display new top after pop
    cout << "(After pop()) The top Value: " << st.top() << endl;

    return 0;
}
