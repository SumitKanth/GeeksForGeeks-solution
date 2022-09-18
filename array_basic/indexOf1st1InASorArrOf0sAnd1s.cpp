// Q. Index of first 1 in a sorted array of 0s and 1s
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(logn) bcoz we have used Binary Search.
int firstIndex(int a[], int n){
    int s = 0, e = n - 1, ans = 0;
    while(s <= e) {
        int mid = (s + e) / 2;
        if(a[mid] < 1) s = mid + 1;
        else {
            ans = mid;
            e = mid - 1;
        }
    }

    return ans;
}

int main(){
    int a[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    int size = sizeof(a) / sizeof(a[0]);

    cout << firstIndex(a, size) << endl;

    return 0;
}

/*
// Brute Force. Time Complexity O(n) bcoz we have used a loop which run till the value of n.
int firstIndex(int a[], int n){
    for(int i=0; i<n; i++) {
        if(a[i] == 1) return i;
    }

    return -1;
}
*/