// Q. C++ Array (print an element) | Set 2
#include<iostream>
using namespace std;

int findElementAtIndex(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(i == k){
            return arr[i];
        }
    }
    return 0;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(int);
    int key = 4;

    cout << findElementAtIndex(arr, size, key) << endl;
    return 0;
}