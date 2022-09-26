// Q. Missing Number

#include<bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N){
    int sumOfN, sumOfArr = 0;
    sumOfN = (N*(N+1)) / 2;
    cout << sumOfN << endl;

    for(int i=0; i<N-1; i++)
        sumOfArr+= A[i];

    cout << sumOfArr << endl;

    return sumOfN - sumOfArr;
}

int main(){
    int A[] = {2, 5, 3, 1};
    int N = 5;

    cout << missingNumber(A, N) << endl;
    return 0;
}