// sort_ascending

#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {10, 35, 85, 93, 62, 77, 345, 43, 2, 10}; 
    int n = 10;

    sort(arr, arr + n);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}


// learn 
// sort left 
// link https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118673/offering/1378940?leftPanelTabValue=NOTE&customSource=studio_nav
