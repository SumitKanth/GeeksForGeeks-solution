// Q. First and last occurrences of X
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(logn) bcoz we have used binary search
vector<int> firstAndLast(vector<int> &arr, int n, int x){
    vector<int> ans;
    int s = 0, e = n - 1, index = -1;
    while(s<=e) {
        int mid = (s + e) / 2;
        if(arr[mid] > x) e = mid - 1;
        else if(arr[mid] < x) s = mid + 1;
        else { 
            index = mid;
            e = mid - 1;
        }
    }
    if(index > -1) ans.push_back(index);

    s = 0, e = n - 1, index = -1;
    while(s <= e){
        int mid = (s + e) / 2;
        if(arr[mid] > x) e = mid - 1;
        else if(arr[mid] < x) s = mid + 1;
        else {
            index = mid;
            s = mid + 1;
        }
    } 
    if(index > -1) ans.push_back(index);
    else ans.push_back(-1);

    return ans;
}

int main(){
    vector<int> arr = {1, 3, 3, 4};
    int size = 4;
    int x = 3;

    vector<int> ans = firstAndLast(arr, size, x);

    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << endl;

    return 0;
}

/*
// Brute force. Time Complexity O(n) bcoz we have used loop which is running till n 
vector<int> firstAndLast(vector<int> &arr, int n, int x){
    vector<int> ans;

    // Finding 1st index
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            ans.push_back(i);
            break;
        }
    }

    // Finding last index
    for(int i=n-1; i>=0; i--){
        if(arr[i] == x){
            ans.push_back(i);
            break;
        }
    }

    if(ans.size() == 0) {
        ans.push_back(-1);
        return ans;
    }
    else return ans;
}
*/