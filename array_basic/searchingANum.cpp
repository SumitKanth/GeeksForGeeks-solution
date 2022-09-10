// Searching a number
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n) bcoz of loop. and Space Complexity O(1) bcoz no space is used.
int search(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i] == k) return i+1;
    }
    return -1;
}

int main(){
    int arr[] = {9, 7, 2, 16, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 16;

    cout << search(arr, size, k) << endl;

    return 0;
}