// Q. First and last occurrences of x
#include<bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n, int x){
    int a = -1, b = -1;
    // For finding value from first
    for(int i=0; i<n; i++){
        if(arr[i] == x) {
            a = i;
            break;
        }
    }

    // For finding value from last
    for(int i=n-1; i>=0; i--){
        if(arr[i] == x){
            b = i;
            break;
        }
    }

    return {a,b};   // another way to return vector;
}

int main(){
    int arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    vector<int> ans = find(arr, size, x);
    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}

/*
// Another code but it takes 2 vectors ( brute force )
vector<int> find(int arr[], int n, int x){
    vector<int> val, ans;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            val.push_back(i);
        }
        if(arr[i] > x){
            break;
        }
    }

    if(val.size() == 0) {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    else{
        ans.push_back(val[0]);
        ans.push_back(val[val.size() - 1]);
    }
    return ans;
}
*/