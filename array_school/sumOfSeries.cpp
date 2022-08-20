#include<iostream>
using namespace std;

int seriesSum(int n){
    return (n * (n+1)) / 2;
}

int main(){
    int n = 10;
    cout << seriesSum(n);
    return 0;
}