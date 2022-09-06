// Q. Product of array elements
#include<bits/stdc++.h>
using namespace std;

long long int product(int ar[], int n, long long int mod)
 {
     
    long long int elemPro = 1;
    for(int i=0; i<n; i++){
        elemPro = (elemPro * ar[i]) % mod;
    }

    return elemPro;
     
 }

int main(){
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mod = 1;

    long long int ans = product(arr, size, mod);
    cout << ans << endl;

    return 0;
}