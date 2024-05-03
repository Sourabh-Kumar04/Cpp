// Sort vector in ascending order

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector < int > v = {10, 35, 85, 93, 62, 77, 345, 43, 2};
    int n = 10;
    sort(v.begin(), v.end());
    cout << "Sorted Vector: " << endl;
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;

}