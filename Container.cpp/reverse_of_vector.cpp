#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v = {10, 35, 85, 93, 62, 77, 345, 43, 2, 100}; 
    int n = 10;
    reverse(v.begin(), v.end());
    cout << "Reversed vector: " << endl;
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}

// continue from here
//  https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118673/offering/1378940?leftPanelTabValue=NOTE&customSource=studio_nav
