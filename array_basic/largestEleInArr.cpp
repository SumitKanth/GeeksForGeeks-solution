// Q. Largest element in array
#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

int main(){
    vector<int> arr = {1, 2, 0, 3, 2, 4, 5};
    int size = 7;

    cout << largest(arr, size);
    return 0;
}