// Q. Fighting the darkness
#include<bits/stdc++.h>
using namespace std;

int maxDays(int arr[], int n) {
    int max = -1;
    for(int i=0; i<n; i++) 
        if(arr[i] > max) max = arr[i];

    return max;    
}

int main(){
    int arr[] = {1,1,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << maxDays(arr, size) << endl;
    return 0;
}