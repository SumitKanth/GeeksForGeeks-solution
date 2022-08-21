// Code Sahi h bs idr nii chlega kioki yaha reverse nii kr pata ye number ko. ( In My IDE)
#include<bits/stdc++.h>
using namespace std;

int PalinArray(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        int num = arr[i];
        int j=0;
        int revNum = 0;
        while(num!=0){
            int last_digit = num % 10;
            revNum = (revNum * 10) + last_digit;
            num = num / 10;
            j++;
        }
        if(arr[i] == revNum){
            ans++;
        }
    }
    int fAns = 0;
    if(ans == n){
        fAns = 1;
    }
    return fAns;
}

int main(){
    int arr[] = {111, 222, 333, 444, 555};
    int size = sizeof(arr) / sizeof(int);

    cout << PalinArray(arr, size) << endl;
    return 0;
}

