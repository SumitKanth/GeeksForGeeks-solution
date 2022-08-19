#include<iostream>
using namespace std;

int ans = 0;
int seriesSum(int n){
    if(n!=0){
        ans+=n;
        seriesSum(n-1);
    }
    return ans;
}

int main(){
    int n = 5;
    cout << seriesSum(n);
    return 0;
}