// Q. Play with an array
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n) 
vector<int> formatArray(vector<int> a, int n){

    for(int i=1; i<n; i=i+2)
        if(a[i] < a[i-1]) swap(a[i], a[i-1]);


    vector<int> ans;
    for(int i=0; i<n; i++) 
        ans.push_back(a[i]);

    return ans;        
}

int main(){
    vector<int> a = {5, 6, 3, 2, 1};
    int size = a.size();

    vector<int> ans = formatArray(a, size);

    for(int i=1; i<ans.size(); i=i+2)
        if(ans[i] < ans[i-1]) {
            cout << "0" << endl;   
            break;
        }

    cout << "1" << endl;    


    return 0;
}