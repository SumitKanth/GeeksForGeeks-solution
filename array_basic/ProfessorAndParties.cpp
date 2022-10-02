#include<bits/stdc++.h>
using namespace std;

string PartyType(int a[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++)
        if(a[i] > max) max = a[i];

    vector<int> ans(max+1, 0);    

    for(int i=0; i<n; i++){
        ans[a[i]]++;
    }

    for(int i=0; i<ans.size(); i++){
        if(ans[i] > 1) return "BOYS";
    }

    return "GIRLS";

}

int main(){
    int a[] = {3, 3};
    int size = sizeof(a) / sizeof(a[0]);


    cout << PartyType(a, size);
    return 0;
}