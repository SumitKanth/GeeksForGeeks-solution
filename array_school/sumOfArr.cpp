#include<iostream>
using namespace std;

int sum(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans+=arr[i];
    }
    return ans;
}

int main(){
    int arr[] =  {1, 2, 3, 4};
    int size = 4;

    cout << sum(arr, size);
    return 0;
}