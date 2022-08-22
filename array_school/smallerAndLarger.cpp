#include<bits/stdc++.h>
using namespace std;

vector<int> getMoreAndLess(int arr[], int n, int x){
    int less_or_eq = 0;
    int more_or_eq = 0;
    vector <int> ans;
    for(int i=0; i<n; i++){
        if(arr[i] <= x){
            less_or_eq++;
        }
        if(arr[i] >= x){
            more_or_eq++;
        }
    }
    ans.push_back(less_or_eq);
    ans.push_back(more_or_eq);
    return ans;
}

int main(){
    int arr[] = {3, 3, 3};
    int size = sizeof(arr) / sizeof(int);
    int x = 3;

    vector <int> ans = getMoreAndLess(arr, size, x);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}