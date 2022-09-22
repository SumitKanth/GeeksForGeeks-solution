// Q. Quick Left Rotation
#include<bits/stdc++.h>
using namespace std;


void leftRotate(int arr[], int n, int k){
    if(n <= k) {
        int val = k % n;
        reverse(arr, arr+n);
        reverse(arr + (n-val), arr+n);
        reverse(arr, arr + (n - val));
    }
    else {
        reverse(arr, arr+n);
        reverse(arr + (n-k), arr+n);
        reverse(arr, arr + (n - k));
    }
    
}

// PrintArr function is for printing array, don't use this in GeeksforGeeks IDE
void printArr(int arr[], int n){
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {80, -62, -90, 7, 50, -41, 70, 8, -7, -9, 44, 22, -57, -97, 26, 72, 95, -39, 65, -51, 52, -29, -18, 4, 98, -3, 95, -11, -90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 9944;

    printArr(arr, size);

    leftRotate(arr, size, k);

    printArr(arr, size);
    return 0;
}

