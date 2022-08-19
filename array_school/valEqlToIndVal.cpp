// Q. Value equal to index value
#include<bits/stdc++.h>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n){
    int val = 1;
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(arr[i] == val){
            ans.push_back(arr[i]);
        }
        val++;
    }
    return ans;
}

int main(){
    int arr[] = {15, 2, 45, 12, 7, 6};
    int size = sizeof(arr)/ sizeof(int);

    vector<int> ans = valueEqualToIndex(arr, size);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}

