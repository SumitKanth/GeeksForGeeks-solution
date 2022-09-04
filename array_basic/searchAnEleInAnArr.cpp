// Q. Search an Element in an array
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n) bcoz of loop  And  Space Complexity O(1) bcoz no extra space is used
int search(int arr[], int N, int X){
    for(int i=0; i<N; i++){
        if(arr[i] == X){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int X = 3;
    cout << search(arr, size, X) << endl;
    return 0;
}