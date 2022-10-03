#include<bits/stdc++.h>
using namespace std;

void shuffleArray(int arr[], int n){
    int size = n / 2;
    vector<int> arr1, arr2;

    for(int i=0; i<size; i++){
        arr1.push_back(arr[i]);
    }

    for(int i=size; i<n; i++){
        arr2.push_back(arr[i]);
    }

    
    int j = 0;
    for(int i=0; i<size; i++){
        arr[j++] = arr1[i];
        arr[j++] = arr2[i];
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 9, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, n);
    return 0;
}