#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n) bcoz no nested loop is used.
// Space Complexity O(n) bcoz we are creating a vector of size n, which is the size of given array.
void SumArray(int arr[], int n){
    int sum = 0;
    vector<int> ans;

    // Sum of all elements in the array
    for(int i=0; i<n; i++) sum+=arr[i];

    // Storing the sum of all elements except arr[i] in ans vector
    for(int i=0; i<n; i++){
        int val = sum - arr[i];
        ans.push_back(val);
    }

    // Storing the elements of ans vector to array
    for(int i=0; i<n; i++)
        arr[i] = ans[i];
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}    

int main(){
    int arr[] = {3, 6, 4, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    SumArray(arr, size);

    printArr(arr, size);

    return 0;
}


/*
// BRUTE FORCE
// Time Complexity O(n^2) bcoz we have nested loop.
// Space Complexity O(n) bcoz we are creating a vector of size n, which is the size of given array.
void SumArray(int arr[], int n){
    vector<int> ans;

    // Storing the Sum of elements except arr[i] in ans vector
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            if(i != j){
                sum+= arr[j];
            }
        }
        ans.push_back(sum);
    }


    // Storing the elements of ans vector to array
    for(int i=0; i<n; i++)
        arr[i] = ans[i];
 
}

*/