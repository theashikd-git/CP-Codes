#include <iostream>
#include <set>
using namespace std;

int main()
{
    /*
        Program: Basic operations on C++ STL set

        Features used:
        - Stores only unique elements
        - Automatically sorts elements
        - insert(), find(), erase()
        - traversal using loop and iterator
    */

    // Creating a set (duplicates will be ignored automatically)
    set<int> s2 = {1, 2, 3, 2, 1};

    // Inserting elements into set
    s2.insert(10);
    s2.insert(8);
    s2.insert(12);
    s2.insert(25);

    // Printing all elements (sorted order)
    cout << "Set elements: ";
    for (auto x : s2)
        cout << x << " ";
    cout << endl;

    // Searching for an element
    auto it = s2.find(1);
    if (it != s2.end())
        cout << "Element found: " << *it << endl;
    else
        cout << "Element not found" << endl;

    // Removing an element
    s2.erase(8);

    // Printing set using iterator
    cout << "After deletion:\n";
    for (auto it = s2.begin(); it != s2.end(); ++it)
        cout << *it << endl;

    return 0;
}
