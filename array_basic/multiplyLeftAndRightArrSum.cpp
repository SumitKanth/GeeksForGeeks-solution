// Q. Multiply left and right array sum
#include<bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n){
    int subArr = n / 2;
    int sum1 = 0, sum2 = 0;
    for(int i=0; i<subArr; i++) sum1+= arr[i];

    for(int i=subArr; i<n; i++) sum2+= arr[i];

    return sum1 * sum2;
}

int main(){
    int arr[] = {1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << multiply(arr, size) << endl;
    return 0;
}