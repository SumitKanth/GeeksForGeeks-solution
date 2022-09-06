// Q. Check if two arrays are equal or not
#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> A, vector<int> B, int N){
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for(int i=0; i<N; i++){
        if(A[i] != B[i]){
            return false;
        } 
    }

    return true;

}

int main(){
    vector<int> A = {1,2,5};
    vector<int> B = {2,4,15};
    int size = 3;

    if(check(A, B, size)) cout << "1" << endl;
    else cout << "0" << endl;
    return 0;
}