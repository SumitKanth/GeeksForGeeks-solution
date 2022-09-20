// Q. Total Count
#include<bits/stdc++.h>
using namespace std;

int totalCount(int arr[], int n, int k){
    int val, finVal, count = 0;
    for(int i=0; i<n; i++){
        val = arr[i] / k;

        if(arr[i] == 0) finVal = val + 1;
        else if((arr[i] % k) == 0) finVal = val;
        else finVal = val + 1;

        count+= finVal;
    }

    return count;
}

int main(){
    int arr[] = {12, 34, 53, 2, 46, 4, 123, 0, 23, 12, 0, 43};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    cout << totalCount(arr, size, k) << endl;
    return 0;
}