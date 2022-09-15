// Q. Balanced Array
#include<bits/stdc++.h>
using namespace std;

int minValueToBalance(int a[], int n) {
    int subArr = n / 2;
    int sum1 = 0, sum2 = 0;

    for(int i=0; i<subArr; i++) sum1+=a[i];

    for(int i=subArr; i<n; i++) sum2+=a[i];

    if(sum1 > sum2) return sum1-sum2;
    else return sum2-sum1;
}

int main(){
    int a[] = {1, 2, 1, 2, 1, 3};
    int size = sizeof(a) / sizeof(a[0]);

    cout << minValueToBalance(a, size) << endl;
    return 0;
}