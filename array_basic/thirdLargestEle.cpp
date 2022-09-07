// Q. Third largest element
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n)
int thirdLargest(int a[], int n){
    int firstMax = -1;
    for(int i=0; i<n; i++) if(a[i] > firstMax) firstMax = a[i];
         
    int secondMax = -1;
    for(int i=0; i<n; i++) if(a[i] > secondMax && a[i] != firstMax) secondMax = a[i];
         
    int thirdMax = -1;
    for(int i=0; i<n; i++) if(a[i] > thirdMax && a[i] != firstMax && a[i] != secondMax) thirdMax = a[i];
         
    return thirdMax;
}

int main(){
    int arr[] = {3, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << thirdLargest(arr, size);
    return 0;
}

/*
// Time Complexity O(nlogn)
int thirdLargest(int a[], int n){
    if(n < 3) return -1;

    sort(a, a+n);
    return a[n-3];
}
*/