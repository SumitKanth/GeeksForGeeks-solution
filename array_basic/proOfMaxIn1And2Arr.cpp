// Q. Product of maximum in first array and minimum in second
#include<bits/stdc++.h>
using namespace std;

long long find_multiplication(int a[], int b[], int n, int m){
        long long max = LONG_LONG_MIN;
        for(int i=0; i<n; i++) {
            if(a[i] > max) max = a[i];
        }

        long long min = LONG_LONG_MAX;
        for(int i=0; i<m; i++) {
            if(b[i] < min) min = b[i];
        }

        long long ans = max * min;
        return ans;
}

int main(){
    int a[] = {0, 0, 0};
    int sizeA = sizeof(a) / sizeof(a[0]);
    int b[] = {1, -1 , 2};
    int sizeB = sizeof(b) / sizeof(b[0]);

    cout << find_multiplication(a, b,sizeA, sizeB ) << endl;


    return 0;
}