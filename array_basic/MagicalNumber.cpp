#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e){
    int num = INT_MIN;
    while(s<=e){
        int mid = (s + e) / 2;
        if(arr[mid] == mid){
            num = mid;
            break;
        } 
        else if(arr[mid] > mid) e = mid - 1;
        else s = mid + 1;
    }
    if(num == INT_MIN) return -1;
    else return num;
}

int main(){
    int arr[] = {1, 2, 8, 10, 11, 30, 50, 100, 150};
    int s = 0;
    int e = 8;

    cout << binarySearch(arr, s, e) << endl;
    return 0;
}