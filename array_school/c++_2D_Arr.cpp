#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(int arr[3][3], int n){
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        vector<int> val;
        for(int j=0; j<n; j++){
            val.push_back(arr[j][i]);
        }
        ans.push_back(val);
    }
    return ans;
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    vector<vector<int>> ans = transpose(arr, n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ans[i][j] << " ";
        }
    }
    return 0;
}