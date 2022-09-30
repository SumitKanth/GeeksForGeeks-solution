#include<bits/stdc++.h>
using namespace std;

vector<int> alternativeSort(int arr[], int N){
    sort(arr, arr+N);   
    vector<int> ans;
    int s = 0, e = N - 1;
    while(s < e){
        ans.push_back(arr[e]);
        ans.push_back(arr[s]);
        s++;
        e--;
    }

    if(N%2 != 0)
        ans.push_back(arr[s]);

    return ans;    
}


// This is for printing the vector don't use it in GFG Question
void printVec(vector<int> vec){
    for(int i=0; i<vec.size(); i++)
        cout << vec[i] << " ";

    cout << endl;
}

int main(){
    int arr[] = {1, 6, 9, 4, 3, 7, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans = alternativeSort(arr, size);

    printVec(ans);
    return 0;
}