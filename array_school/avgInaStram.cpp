#include<bits/stdc++.h>
using namespace std;

vector<float> streamAvg(int arr[], int n){
    float count = 1;
    float curSum = 0;
    vector<float> ans;
    for(int i=0; i<n; i++){
        curSum = arr[i] + curSum;
        float val = curSum / count++;
        ans.push_back(val);
    }
    return ans;
}

int main(){
    int arr[] = {39, 72, 44, 66, 57, 70, 63, 91, 70, 77, 12, 80, 56, 10, 80, 72, 37, 88, 73, 84, 61, 41, 57, 26, 37, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<float> ans = streamAvg(arr, size);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}