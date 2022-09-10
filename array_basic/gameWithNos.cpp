/// Q. Game with nos
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n) bcoz of loop. and Space Complexity O(1) bcoz no extra space is used.
int* game_with_number(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int xorNum = arr[i] ^ arr[i+1];
        arr[i] = xorNum;
    }

    return arr;
}

int main(){
    int arr[] = {5, 9, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* ans = game_with_number(arr, size); 

    for(int i=0; i<size; i++) cout << ans[i] << " ";
    cout << endl;

}