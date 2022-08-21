#include<bits/stdc++.h>
using namespace std;

vector<int> findIndex(int a[], int n, int key){
    vector <int> ans;
    for(int i=0; i<n; i++){
        if(a[i] == key){
            ans.push_back(i);
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(a[i] == key){
            ans.push_back(i);
            break;
        }
    }
    if(ans.size() == 0){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    return ans;
}

int main(){
    int a[] = { 1, 2, 3, 4, 5, 5 };
    int size = sizeof(a) / sizeof(int);
    int key = 5;

    vector<int> ans =  findIndex(a, size, key);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
