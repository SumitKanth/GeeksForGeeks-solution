// Q. Largest element in array
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n) bcoz of loop
int largest(vector<int> &arr, int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    vector<int> arr = {1, 2, 0, 3, 2, 4, 5};
    int size = 7;

    cout << largest(arr, size);
    return 0;
}

/*
// Another solution 
// Time Complexity O(nlogn) bcoz of sorting
int largest(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

*/