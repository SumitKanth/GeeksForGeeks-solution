#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

void rotate(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    s = 1;
    e = n-1; 
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main(){
    int arr[] = {9, 8, 7, 6, 4, 2, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    rotate(arr, size);

    printArr(arr, size);

    return 0;
}