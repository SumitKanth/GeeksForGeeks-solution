#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(int arr[], int n){
    sort(arr, arr+n);
    vector<int> ans;

    // Storing the array element in vector
    for(int i=0; i<n; i++)
        ans.push_back(arr[i]);

    int size = ans.size();

    // Storing the vector elements in array by rearranging it
    int s = 0, e = size - 1, i = 0;
    while(s<e){
        arr[i++] = ans[s];
        arr[i++] = ans[e];
        s++;
        e--;
    }

    if(size%2 != 0) arr[i] = ans[s];

}


void printArr(int arr[], int n){
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    rearrangeArray(arr, size);

    printArr(arr, size);
    return 0;
}