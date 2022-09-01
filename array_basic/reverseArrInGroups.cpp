// Q. Reverse Array In Groups
#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr){
    for(int i=0; i<arr.size(); i++) cout << arr.at(i) << " ";
    cout << endl;
}

void reverseInGroups(vector<int> &arr, int n, int k){
    int total_reverse = n / k;
    int beg_rev, end_rev;
    while(total_reverse){
        beg_rev = 0;
        end_rev = k;
        reverse(arr.begin()+beg_rev, arr.begin()+end_rev);
        beg_rev = beg_rev + k;
        end_rev = end_rev + k;
        total_reverse--;
    }

    int rest_rev = n % k;
    reverse(arr.end()-rest_rev, arr.end());
}

int main(){
    vector <int> arr = {36, 93, 64, 48, 96, 55, 70, 0, 82, 30, 16, 22, 38, 53, 19, 50, 91, 43, 70, 88, 10, 57, 14, 94, 13, 36, 59, 32, 54, 58, 18, 82, 67};

    printArr(arr);

    reverseInGroups(arr, 33, 13);
    
    printArr(arr);
    return 0;
}