// Q. Minimum distance between two numbers
#include<bits/stdc++.h>
using namespace std;

int minDist(int a[], int n, int x, int y){
    int valX = -1;
    for(int i=0; i<n; i++){
        if(a[i] == x){
            valX = i;
        }
    }

    if(valX == -1) return -1;

    int minVal = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i] == y){
            if(abs(i-valX) < minVal){
                minVal = abs(i - valX);
            }
        }
    }

    return minVal;
}

int main(){
    int a[] = {23, 43, 23, 42, 43, 56};
    int size = sizeof(a) / sizeof(a[0]);
    int x = 23, y = 43;

    cout << minDist(a, size, x, y) << endl;
    return 0;
}