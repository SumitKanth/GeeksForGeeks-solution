// Q. Count of smaller element.
#include<iostream>
using namespace std;

int countOfElements(int arr[], int n, int x){
    int ans = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            ans++;
        }
        else if(arr[i] < x){
            ans++;
        }
        else {
            break;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1, 2, 2, 2, 5, 7, 9};
    int size = 7;
    int x = 2;

    cout << countOfElements(arr, size, x);
    return 0;
}