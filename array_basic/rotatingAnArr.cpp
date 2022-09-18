#include<bits/stdc++.h>
using namespace std;

// Time Complexity is O(n) bcoz we have used reverse function which takes O(n) time.
void leftRotate(int arr[], int n, int d){
    // Reversed whole array
    reverse(arr, arr+n);
    // updated array : {7, 6, 5, 4, 3, 2, 1}

    // Reversed the array from d to end
    reverse(arr + (n - d), arr+n);
    // updated array : {7, 6, 5, 4, 3, 1, 2}

    // Reversed the rest array
    reverse(arr, arr + (n - d));
    // updated array : {3, 4, 5, 6, 7, 1, 2}
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    printArr(arr, size);

    leftRotate(arr, size, d);

    printArr(arr, size);

    return 0;
}