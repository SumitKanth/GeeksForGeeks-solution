#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n+m)
int countPairs(int arr1[], int arr2[], int m, int n, int x){
    int i=0, j=n-1, count = 0;
    while((i<m) && (j>=0)){
        if((arr1[i] + arr2[j]) == x){
            count++;
            i++;
            j--;
        } 
        else if((arr1[i] + arr2[j]) < x) i++;
        else j--;
    }

    return count;
}

int main(){
    int arr1[] = {1, 3, 5, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]); 
    int arr2[] = {2, 3, 5, 8} ;
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int x = 10;

    cout << countPairs(arr1, arr2, m, n, x) << endl;

    return 0;
}

/*
// BRUTE FORCE 
// Time Complexity O(n^2).
int countPairs(int arr1[], int arr2[], int m, int n, int x){
     int count = 0;
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if((arr1[i] + arr2[j]) == x) count++;
        }
     }

     return count;
}   
*/