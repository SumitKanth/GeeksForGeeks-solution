// Q. Perfect Arrays 
#include<iostream>
using namespace std;

bool IsPerfect(int a[], int n){
    int st = 0;
    int end = n - 1;
    while(st<=end){
        if(a[st] != a[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if(IsPerfect(arr, size)){
        cout << "PERFECT" << endl;
    }
    else {
        cout << "NOT PERFECT" << endl;
    }
    return 0;
}