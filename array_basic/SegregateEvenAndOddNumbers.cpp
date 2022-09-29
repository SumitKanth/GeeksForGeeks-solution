#include<bits/stdc++.h>
using namespace std;

void segregateEvenOdd(int arr[], int n){
    vector<int> even, odd;

    // Seperating even and odd numbers from the array to even and odd vector
    for(int i=0; i<n; i++){
        if((arr[i] % 2) == 0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }

    // Sorting both even and odd vector
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    
    // Putting even vector elements to array
    for(int i=0; i<even.size(); i++)
        arr[i] = even[i];

    // Putting odd vector elements to array
    int j = even.size();
    for(int i=0; i<odd.size(); i++)
        arr[j++] = odd[i];

}


// This function is for printing the array, no need to use this function in GFG problem.
void printArr(int arr[], int n){
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {0, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    segregateEvenOdd(arr, size);

    printArr(arr, size);

    return 0;
}