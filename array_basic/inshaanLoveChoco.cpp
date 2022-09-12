// Q. Ishaan Loves Chocolates
#include<bits/stdc++.h>
using namespace std;

int chocolates(int n, vector<int> &arr){
    int min = INT_MAX;
    for(int i=0; i<n; i++) if(arr[i] < min) min = arr[i];

    return min;
}

int main(){
    vector<int> arr = {5, 9, 2, 6} ;
    int size = 4;

    cout << chocolates(size, arr) << endl;

    return 0;
}