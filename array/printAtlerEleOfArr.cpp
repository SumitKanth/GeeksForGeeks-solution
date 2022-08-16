#include<iostream>
using namespace std;

int main(){
    int ar[] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i=0; i<n; i=i+2){
        cout << ar[i] << " ";
    }
    return 0;
}