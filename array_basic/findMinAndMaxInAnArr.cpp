// Q. Find minimum and maximum element in an array ?
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Time complexity is O(n) bcoz of one loop and Space complexity is O(1) bcoz no extra space is used.
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<ll, ll> ans;
    ll min = LONG_LONG_MAX;
    ll max = LONG_LONG_MIN;
    for(int i=0; i<n; i++){
        if(a[i] < min) min = a[i];
        
        
        if(a[i] > max) max =  a[i];
    
    }
    ans.first = min;
    ans.second = max;
    
    return ans;
}
int main(){
    ll arr[] = {1, 345, 234, 21, 56789};
    ll size = sizeof(arr) / sizeof(arr[0]);

    pair <ll, ll> ans = getMinMax(arr, size);
    cout << "min = " << ans.first << ", " << "max = " << ans.second << endl;
    return 0;
}