#include<bits/stdc++.h>
using namespace std;

void sortIt(long long arr[], long long n){
    vector<int> ans;

    // Storing the odd elements in ans vector
    for(int i=0; i<n; i++)
        if((arr[i]%2) != 0) ans.push_back(arr[i]);


    int size = ans.size();

    // Storing the even elements in ans vector
    for(int i=0; i<n; i++)
        if((arr[i]%2) == 0) ans.push_back(arr[i]);


    sort(ans.begin(), ans.begin()+size);
    reverse(ans.begin(), ans.begin()+size);

    sort(ans.begin()+size, ans.end());

    // Storing vector elements to array
    for(int i=0; i<n; i++)
        arr[i] = ans[i];

}


void printArr(long long arr[], int n){
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main(){
    long long arr[] = {86, 93, 82, 78, 35, 94, 91, 17, 12, 51, 90};
    long long size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    sortIt(arr, size);

    printArr(arr, size);
    return 0;
}