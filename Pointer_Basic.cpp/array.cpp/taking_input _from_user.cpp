// program to create a array of size of n and taking input n from user

#include <iostream>
using namespace std;

int get_sum(int* arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum +=arr[i];
    }
    return sum;
}




int main(){

    //taking input
    int n;
    cout << "Enter of which Order Array You want to Create :";
    cin >> n;

    // Variable size array
    int* arr = new int[n];

    // taking input in Array 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = get_sum(arr,n);
    cout << "Answer is :" << ans << endl;

    return 0;

}