// Q. Pythagorean Triplet
#include<bits/stdc++.h>
using namespace std;

bool checkTriplet(int arr[], int n) {
        sort(arr, arr+n);
        
        for(int i=0; i<n; i++) arr[i] = arr[i] * arr[i];
        
        int count = 1;
        for(int i=0; i<n; i++){
            int key=arr[i];
            int s = 0,e=i-1;
            while(s<e){
                if((arr[e] + arr[s]) == key) return true;
                else if((arr[e] + arr[s]) > key) e--;
                else s++;
            }
        }
        
        return false;

}

int main(){
    int arr[] = {42, 12, 54, 69, 48, 45, 63, 58, 38, 60, 24, 42, 30, 79, 17, 36, 91};
    int size = sizeof(arr) / sizeof(arr[0]);

    if(checkTriplet(arr, size)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
