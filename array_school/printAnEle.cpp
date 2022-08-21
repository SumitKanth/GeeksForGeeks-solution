// Q. C++ Array (print an element) | Set 2
#include<iostream>
using namespace std;

int findElementAtIndex(int a[], int n, int key){
    for(int i=0; i<n; i++){
        if(i == key){
            return a[i];
        }
    }
    return 0;
}

int main(){
    int a[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(a) / sizeof(int);
    int key = 4;

    cout << findElementAtIndex(a, size, key) << endl;
    return 0;
}