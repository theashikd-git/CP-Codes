#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    /*
        Vector Basics Demo

        Operations used:
        - push_back() → add elements
        - insert() → add element at specific position
        - erase() → remove element from position
        - pop_back() → remove last element
        - indexing → update element
        - sort() → sort the vector
    */

    // Adding initial elements
    vec.push_back(10);
    vec.push_back(20);

    // Taking 5 more inputs from user and adding to vector
    for (int i = 0; i < 5; i++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    // Insert 99 at index 2
    vec.insert(vec.begin() + 2, 99);

    // Remove element at index 2
    vec.erase(vec.begin() + 2);

    // Remove last element
    vec.pop_back();

    // Update second element
    vec[1] = 200;

    // Sort vector in ascending order
    sort(vec.begin(), vec.end());

    // Print final vector
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    return 0;
}
