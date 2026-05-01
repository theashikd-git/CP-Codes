#include <iostream>
#include <map>
using namespace std;

int main() {
    /*
        Program: Basic operations on C++ STL multimap

        Features used:
        - insert multiple values for same key
        - traversal of multimap
        - key-value storage
    */

    multimap<int, string> mmp;

    // Inserting key-value pairs
    // Multimap allows duplicate keys
    mmp.insert({1, "Ashik"});
    mmp.insert({2, "Dewan"});
    mmp.insert({1, "Rahim"});
    mmp.insert({3, "David"});
    mmp.insert({2, "John"});

    // Traversing multimap (sorted by key automatically)
    cout << "Multimap elements:\n";
    for (auto it = mmp.begin(); it != mmp.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    // Finding all values for a specific key
    int key = 1;
    cout << "\nValues for key " << key << ":\n";

    auto range = mmp.equal_range(key);

    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
