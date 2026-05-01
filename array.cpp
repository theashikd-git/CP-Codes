#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    File: array.cpp
    Problem: Sort an array in ascending order

    Approach:
    - Take input of n elements
    - Store in array
    - Use STL sort() function
    - Print sorted array

    Time Complexity: O(n log n)
*/

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
