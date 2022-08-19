/* Using 2 pointer algorithm */
#include<bits/stdc++.h>
using namespace std;

bool hasArrTwoCandidates(int arr[], int n, int x){
    int i = 0;
    int j = n - 1;
    bool ans = false;
    while(i<j){
        if((arr[i]+arr[j]) == x){
            ans = true;
            break;
        }
        else if((arr[i]+arr[j]) < x){
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1, 4, 45, 6, 10, 8};
    int size = 6;
    int num = 16;

    sort(arr, arr+size);
    
    bool ans = hasArrTwoCandidates(arr, size, num);

    if(ans){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    

    return 0;
}


/*
// Time Complexity O(n^2);

bool hasArrayTwoCandidates(int arr[], int n, int x){
    bool ans = false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i] + arr[j]) == x){
                ans = true;
            }
        }
    }
    return ans;
}

int arr[] = {1, 2, 4, 3, 5};
int size = 5;
int num = 10;

if(hasArrayTwoCandidates(arr, size, num)){
    cout << "True" << endl;
}
else{
    cout << "False" << endl;
}

*/