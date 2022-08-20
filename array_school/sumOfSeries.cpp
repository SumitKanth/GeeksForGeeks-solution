#include<iostream>
using namespace std;

int seriesSum(int n){
    return (n * (n+1)) / 2; // Time Complexity O(1)
}

int main(){
    int n = 5;
    cout << seriesSum(n);
    return 0;
}

/*
// Time complexity O(n) bcoz of recursion
int ans = 0;
int seriesSum(int n){
    if(n!=0){
        ans+= n;
        seriesSum(n-1);
    }
    return ans;
}

*/