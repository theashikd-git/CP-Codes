#include <iostream>
#include <set>
using namespace std;

int main()
{
    /*
        Program: Basic operations on C++ STL multiset

        Features used:
        - Stores elements in sorted order
        - Allows duplicate elements
        - insert(), find(), erase()
        - traversal using loop and iterator
    */

    // Creating a multiset (duplicates are allowed)
    multiset<int> s2 = {1, 2, 3, 2, 1};

    // Inserting elements
    s2.insert(10);
    s2.insert(8);
    s2.insert(12);
    s2.insert(25);

    // Printing all elements (sorted order, duplicates included)
    cout << "Multiset elements: ";
    for (auto x : s2)
        cout << x << " ";
    cout << endl;

    // Searching for an element (returns first occurrence)
    auto it = s2.find(1);
    if (it != s2.end())
        cout << "Element found: " << *it << endl;
    else
        cout << "Element not found" << endl;

    // Removing all occurrences of a value
    s2.erase(2);

    // Printing elements after deletion
    cout << "After deletion:\n";
    for (auto it = s2.begin(); it != s2.end(); ++it)
        cout << *it << endl;

    return 0;
}
