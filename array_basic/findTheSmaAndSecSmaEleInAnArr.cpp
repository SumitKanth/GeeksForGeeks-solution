// Find the smallest and second smallest element in an array
#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n) bcoz we have used loops
vector<int> minAnd2ndMin(int a[], int n){

    // Checking if the all the elements are same or not 
    int count = 0;
    for(int i=0; i<n-1; i++) 
        if(a[i] == a[i+1]) count++;

    if(count == (n-1)) return {-1, -1};

    // Finding smallest element
    int min1 = INT_MAX;
    for(int i=0; i<n; i++) 
        if(a[i] < min1) min1 = a[i];


    // Finding second smallest element
    int min2 = INT_MAX;
    for(int i=0; i<n; i++) 
        if((a[i] < min2) && (a[i] != min1)) 
            min2 = a[i];
            

    return {min1, min2};
}

int main(){
    int a[] = {1, 2, 1, 3, 6, 7};
    int size = sizeof(a) / sizeof(a[0]);

    vector<int> ans = minAnd2ndMin(a, size);

    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << endl;

    return 0;
}

/*
// brute force. Time Complexity O(nlogn) bcoz we have used sorting algorithm
vector<int> minAnd2ndMin(int a[], int n){
    sort(a, a+n);

    if(n == 0) return {-1, -1};

    for(int i=0; i<n; i++){
        if(a[i] != a[i+1]){
            return {a[i], a[i+1]};
            break;
        }
    }

    return {};
}
*/