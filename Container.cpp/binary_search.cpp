#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    vector < int > v = {7, 8, 4, 1, 6, 5, 9, 4};
    sort(v.begin(), v.end());
    cout << binary_search(v.begin(), v.end(), 7); //prints 1 , Boolean true
    cout << binary_search(v.begin(), v.end(), 217); //prints 0 , Boolean false
    vector < string > s = {"test", "abcde", "efghijkl", "abc"};
    cout << binary_search(s.begin(), s.end(), "abcd");
    /* search for the string in s which have same length as of "abcd" */
}


// backend of binary search function
// compare_string_by_length
