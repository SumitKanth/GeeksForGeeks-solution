// Q. Play With OR
#include<bits/stdc++.h>
using namespace std;

int* game_with_number(int arr[], int n){
    for(int i=0; i<n-1; i++) 
        arr[i] = arr[i] | arr[i+1];

    return arr;    
}

int main(){
    int arr[] = {5, 9, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* ans = game_with_number(arr, size);

    for(int i=0; i<size; i++) 
        cout << ans[i] << " ";

    return 0;
}