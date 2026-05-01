#include <iostream>
#include <map>
using namespace std;

int main() {
    /*
        Program: Basic operations on C++ STL map

        Features used:
        - Initialization of map
        - insert()
        - operator[] (adding/updating values)
        - find()
        - traversal using iterator
    */

    map<int, string> mp;

    // Initializing map with key-value pairs
    mp = {{1, "Ashik"}, {2, "Dewan"}};

    // Inserting a new key-value pair
    mp.insert({10, "DIV"});

    // Adding/updating value using key
    mp[3] = "Devid";

    // Accessing value using key
    cout << mp[3] << endl;

    // Traversing the map (sorted by key automatically)
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    // Searching for a key in map
    auto it = mp.find(0);

    if (it != mp.end()) {
        cout << it->first << " " << it->second << endl;
    } else {
        cout << "Not Found";
    }

    return 0;
}
