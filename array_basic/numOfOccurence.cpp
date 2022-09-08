// Q. Number of occurrence
#include<bits/stdc++.h>
using namespace std;

// Using 2 pointer Algorithm Approach
int count(int arr[], int n, int x){
    int num = 0;
    int s = 0, e = n - 1;
    while(s<=e) {
        if((arr[s] == x) && s == e) {
            num++;
            break;
        }
        if(arr[s] == x) num++;
        if(arr[e] == x) num++;

        s++;
        e--;
    }

    return num;
}

int main(){
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    cout << count(arr, size, x) << endl;

    return 0;
}

/*
// Another solution.    Time Complexity O(n) and Space Complexity O(1)
int count(int arr[], int n, int x){
    int num = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == x) num++;
        else if(arr[i] > x) break;
    }

    return num;
}
*/