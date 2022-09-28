#include<bits/stdc++.h>
using namespace std;

// Time complexity O(n)
void nextGreatest(int arr[], int n){
    int gtr = -1, temp;
    for(int i=n-1; i>=0; i--){
        temp = arr[i];
        arr[i] = gtr;
        gtr = max(gtr, temp);
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    nextGreatest(arr, size);

    printArr(arr, size);
    return 0;
}


/*
// BRUTE FORCE   
// Time Complexity O(n^2) bcoz we have used nested loop which are running for the value of n.
void nextGreatest(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int max = INT_MIN;
        for(int j=i+1; j<n; j++){
            if(arr[j] > max) max = arr[j];
        }
        arr[i] = max;
    }

    arr[n-1] = -1;
}
*/