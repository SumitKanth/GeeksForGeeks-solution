// Q. Permutations in array
#include<bits/stdc++.h>
using namespace std;

bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a, a+n);
        sort(b, b+n);
        reverse(b, b+n);
        
        for(int i=0; i<n; i++) if((a[i] + b[i]) < k) return false;
        
        return true;    
};

int main(){
    int a[] = {2, 1, 3};
    int b[] = { 7, 8, 9 };
    int k = 10;
    int n = 3;

    if(isPossible) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}