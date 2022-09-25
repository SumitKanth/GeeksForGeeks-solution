// Q. Arranging the array
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n) bcoz we have used loop.     Space Complexity O(n) bcoz we have used vector
void Rearrange(int arr[], int n){
    vector<int> ans;

    // Checking for all -ve elements and putting it in vector 
    for(int i=0; i<n; i++)
        if(arr[i] < 0) ans.push_back(arr[i]);


    // Checking for all +ve elements and also 0 and putting it in vector
    for(int i=0; i<n; i++)
        if(arr[i] >= 0) ans.push_back(arr[i]);


    // Copying vector all elements to array
    for(int i=0; i<n; i++) arr[i] = ans[i];
         
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {2, -4, 7, -3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    Rearrange(arr, size);

    printArr(arr, size);
    return 0;
}