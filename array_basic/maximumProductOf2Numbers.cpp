#include<bits/stdc++.h>
using namespace std;


// Time Complexity O(n)
int maxProduct(int arr[], int n){
    int max1 = INT_MIN, max2 = INT_MIN;
    int indVal;

    // Finding 1st maximum number in the array
    for(int i=0; i<n; i++)
        if(arr[i] > max1){
            max1 = arr[i];
            indVal = i;
        }  

    // Finding 2nd maximum number in the array
    for(int i=0; i<n; i++)
        if((arr[i] > max2) && (i != indVal)){
            max2 = arr[i];
        } 

    return max1*max2;
}

int main(){
    int Arr[] = {1, 100, 42, 4, 23}  ;
    int size = sizeof(Arr) / sizeof(Arr[0]);

    cout << maxProduct(Arr, size) << endl;
    return 0;
}



/*
// Another Solution. Time Complexity O(nlogn) bocz sorting is used.
int maxProduct(int arr[], int n){
    sort(arr, arr+n);

    return arr[n-2] * arr[n-1];
}
*/