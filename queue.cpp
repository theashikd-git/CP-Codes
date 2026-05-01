#include <iostream>
#include <queue>
using namespace std;

int main()
{
    /*
        Program: Basic operations on C++ STL queue

        Features used:
        - push() → insert element at back
        - pop() → remove element from front
        - front() → access first element
        - back() → access last element
        - empty() → check if queue is empty

        Queue follows FIFO (First In First Out)
    */

    queue<int> q;

    // Taking 5 inputs and adding to queue
    for (int i = 0; i < 5; i++) {
        int tmp;
        cin >> tmp;
        q.push(tmp);
    }

    // Adding extra value
    q.push(10);

    // Checking if queue is empty
    if (!q.empty()) {
        cout << "Queue is not empty" << endl;
    }

    // Display front and back elements
    cout << "The Front Value: " << q.front() << endl;
    cout << "The Back Value: " << q.back() << endl;

    // Removing front element
    q.pop();

    // New front after pop
    cout << "The Front Value: " << q.front() << endl;

    return 0;
}
