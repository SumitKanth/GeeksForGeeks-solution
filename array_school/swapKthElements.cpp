#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapKth(int arr[], int n, int k){
    swap(arr[k-1], arr[n-k]);   // inbuilt swap function
    /*
    // swap formula
    int temp = arr[k-1];
    arr[k-1] = arr[n-k];
    arr[n-k] = temp;
    */
}

int main(){
    int arr[] = {5, 3, 6, 1, 2};
    int size = sizeof(arr)/sizeof(int);
    int k = 2;

    printArr(arr, size);

    swapKth(arr, size, k);

    printArr(arr, size);
    return 0;
}