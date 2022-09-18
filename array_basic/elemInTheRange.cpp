// Q. Elements in the Range
#include<bits/stdc++.h>
using namespace std;

// Optimized code. Time Complexity O(n)
bool check_elements(int arr[], int n, int A, int B) {
    int a[1000000] = {0};
		
		for(int i=0; i<n; i++) 
		    a[arr[i]]++;
		    
		
		for(int i=A; i<=B; i++)
		    if(a[i] == 0)
		        return false;
		        
		        
		return true;        
   
    
}

int main(){
    int arr[] = {1, 4, 5, 2, 7, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int A = 2;
    int B = 6;

    if(check_elements(arr, size, A, B)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}


/*
// Brute force approach. Time Complexity O(n^2)
bool check_elements(int arr[], int n, int A, int B) {
    int val = A, count = 0;
    for(int i=0; i<n; i++) {
        if(val <= B){
            int j = 0;
            while(j < n){
                if(arr[j] == val) {
                    count++;
                    val++;
                    break;
                }
                j++;
            }
        }
        else break;
    }

    int ans = B - A;
    ans += 1;
    if(ans == count) return true;
    else return false;
}
*/