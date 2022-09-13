// Q. Maximum in Struct Array
#include<bits/stdc++.h>
using namespace std;

struct Height {
    int feet;
    int inches;
};

int findMax(Height arr[], int n){
    // Creating vector for storing values
    vector<int> ans;
    for(int i=0; i<n; i++) {
        // Converting feet into inches
        int f_i = arr[i].feet * 12;
        int val = f_i + arr[i].inches;   
        ans.push_back(val);
    }
    sort(ans.begin(), ans.end());

    // Returning last element of the vector bcoz vector is sorted
    return ans[ans.size() - 1];
}

int main(){
    int n = 2;
    Height arr[n];

    // Taking input 
    for(int i = 0; i< n; i++) {
        cin >> arr[i].feet;
        cin >> arr[i].inches;
    }

    cout << findMax(arr, n);

    return 0;
}