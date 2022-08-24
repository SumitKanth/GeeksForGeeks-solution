// Q. Print The Left Element
#include<bits/stdc++.h>
using namespace std;

void printArr(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int leftElement(int a[], int n){
    sort(a, a+n);
    int mid = (n-1) / 2;    // Finding mid element of the array
    return a[mid];
}

int main(){
    int a[] = {7, 8, 3, 4, 2, 9, 5};
    int size = sizeof(a) / sizeof(a[0]);

    int ans = leftElement(a, size);
    cout << ans << endl;
    return 0;
}