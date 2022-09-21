// Q. Minimum product pair
#include<bits/stdc++.h>
using namespace std;

long long int printMinimumProduct(int arr[], int n) {
        long long int min1 = INT_MAX;
        long long int min2 = INT_MAX;
        int arrIndex;
        
        for(int i=0; i<n; i++){
            if(arr[i] < min1) {
                arrIndex = i;
                min1 = arr[i];
            }
        }
        
        for(int i=0; i<n; i++) {
            if((arr[i] < min2) && (i != arrIndex)) {
                min2 = arr[i];
            }
        }
        
        long long int ans = min1 * min2;
        return ans;
    }

int main(){
    int arr[] = {2, 7, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << printMinimumProduct(arr, size) << endl;
    return 0;
}