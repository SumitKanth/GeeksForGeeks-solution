// Q. Minimize the sum of product
#include<bits/stdc++.h>
using namespace std;

long long int minValue(int a[], int b[], int n){
    sort(a, a+n);

    sort(b, b+n);
    reverse(b, b+n);

    long long int num = 0;
    for(int i=0; i<n; i++) num+= a[i] * b[i];

    return num;
}

int main(){
    int a[] = {6, 1, 9, 5, 4};
    int b[] = {3, 4, 8, 2, 4};
    int size = sizeof(a) / sizeof(a[0]);

    cout << minValue(a, b, size) << endl;

    return 0;
}