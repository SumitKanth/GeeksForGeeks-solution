// Q. Maximize sum(arr[i]*i) of an Array
#include<bits/stdc++.h>
using namespace std;

int Maximize(int a[], int n){
    sort(a, a+n);
    long long int ans = 0, val = pow(10, 9) + 7, i;
    for(i=0; i<n; i++) 
        ans = (a[i] * i) + ans;

    return ans % val;;    
}

int main(){
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << Maximize(arr, size);
    return 0;
}