#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x){
    for(int i=0; i<n; i++)
        if(arr[i] == x) return {x, x};
        
    
    int floor_val = INT_MIN;   
    for(int i=0; i<n; i++)
        if((arr[i] > floor_val) && (arr[i] < x))
            floor_val = arr[i];
            
            

    vector<int> ceil_vec;
    int ceil_val = INT_MAX;
    for(int i=0; i<n; i++)
        if(arr[i] > x) ceil_vec.push_back(arr[i]);
        
        
    for(int i=0; i<ceil_vec.size(); i++)
        if(ceil_vec[i] < ceil_val) ceil_val = ceil_vec[i];
        
        
        
    if(floor_val == INT_MIN && ceil_val == INT_MAX) return {-1, -1};
    else if(floor_val == INT_MIN) return {-1, ceil_val};
    else if(ceil_val == INT_MAX) return {floor_val, -1};
    else return {floor_val, ceil_val};
}

int main(){
    int arr[] = {5, 6, 8, 9, 6, 5, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 7;

    pair<int, int> ans = getFloorAndCeil(arr, size, x);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}