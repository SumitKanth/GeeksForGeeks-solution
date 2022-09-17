// Q. Find Number of Numbers
#include<iostream>
using namespace std;

int num(int a[], int n, int k) {
    int count = 0;
     for(int i=0; i<n; i++) {
         int num = a[i];
         while(num != 0){
             int val = num % 10;
             if(val == k) count++;
             num = num / 10;
         }
         
     }
     
     return count;
}

int main(){
    int a[] = {11, 12, 13, 14, 15};
    int size = sizeof(a) / sizeof(a[0]);
    int k = 1;

    cout << num(a, size, k) << endl;

    return 0;
}