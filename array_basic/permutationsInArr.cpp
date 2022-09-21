// Q. Permutations in array
#include<bits/stdc++.h>
using namespace std;

bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a, a+n);
        sort(b, b+n);
        reverse(b, b+n);
        
        for(int i=0; i<n; i++) if((a[i] + b[i]) < k) return false;
        
        return true;
        }

int main(){
    long long int a[] = {1, 2, 2, 1}; 
    long long int b[] = { 3, 3, 3, 4 }; 
    long long int k = 5; 
    int n = 4;

    if(isPossible(a, b, n, k)) cout << "True" << endl;
    else cout << "false" << endl;
    return 0;
}