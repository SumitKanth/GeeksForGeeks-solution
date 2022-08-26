// Q. Compete the skills
#include<bits/stdc++.h>
using namespace std;

// Time complexity is O(1) bcoz we are running the loop for 3 times only and O(3) is O(1) only
void scores(long long a[], long long b[], int &ca, int &cb){
    for(int i=0; i<3; i++){
        if(a[i] < b[i]){
            cb++;
        }
        else if(a[i] > b[i]){
            ca++;
        }
    }
}

int main(){
    long long A[] = {4, 2, 7};
    long long B[] = {5, 2, 8};
    int ca = 0, cb = 0;

    scores(A, B, ca, cb);
    cout << ca << " " << cb << endl;
    return 0;
}