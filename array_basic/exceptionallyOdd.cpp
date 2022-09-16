// Q. Exceptionally odd
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n) and Space Complexity O(1);
int getOddOccurrence(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++)
        ans = ans ^ arr[i];

    return ans;    
}

int main(){
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << getOddOccurrence(arr, size) << endl;
    return 0;
}


/*
// Brute force. Time Complexity O(n) and Space Complexity O(max of n);
int getOddOccurrence(int arr[], int n){
    int max = -1;
    for(int i=0; i<n; i++) 
        if(arr[i] > max) max = arr[i];

    int size = max + 1;    
    int a[size] = {0};

    for(int i=0; i<n; i++) 
        a[arr[i]]++;

    for(int i=0; i<size; i++)
        if(a[i] % 2 != 0) return i;    

    return -1;

}
*/