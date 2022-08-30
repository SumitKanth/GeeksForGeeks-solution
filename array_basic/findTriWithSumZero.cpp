#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n^2);
bool findTriplets(int arr[], int n){
    int val;
    sort(arr, arr+n);
    for(int i=0; i<n-2; i++){
        val = -arr[i];
        int s = i+1;
        int e = n-1;
        while(s<e){
            if(arr[s]+arr[e] < val){
                s++;
            }
            else if(arr[s]+arr[e] > val){
                e--;
            }
            else {
                return true;
            }
        }
    }

    return false;
}

int main(){
    int arr[] = {60, -65, 5, -21, 8, 93};
    int size = sizeof(arr) / sizeof(arr[0]);

    if(findTriplets(arr, size)){
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    return 0;
}

/*
// Another code but time complexity is not good --> O(n^3) bcoz of 3 nested loop
bool findTriplets(int arr[], int n){
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k] == 0){
                    return true;
                }
            }
        }
    }
    return false;
}
*/