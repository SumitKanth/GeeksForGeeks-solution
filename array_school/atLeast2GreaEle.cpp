// Q. At least two greater elements
#include<bits/stdc++.h>
using namespace std;

vector <int> findElements(int a[], int n){
    vector <int> ans;
    sort(a, a+n);   // Sorting the array, it is an InBuilt function in C++
    for(int i=0; i<n-2; i++){
        // ans[i] = a[i];     // This line will not work bcoz we are assigning the elements like we assign in array.
        // We can't assign elements in vector like we assign in array
        ans.push_back(a[i]);
    }
    return ans;
}

int main(){
    int a[] = {7, -2, 3, 4, 9, -1};

    // sizeof(a) is 6 * 4 = 24 bytes bcoz "sizeof" keyword gives the size in bytes and 1 int has 4 bytes so 6 * 4 is 24
    // sizeof(a[0]) is 1 * 4 = 4 bytes bcoz a[0] is type int and 1 int = 4bytes
    // So by diving the size of array "a" by size of int we got the acctual size of array "a" which is 24 / 4 = 6
    int size = sizeof(a)/sizeof(a[0]);  
    
    vector<int> ans = findElements(a, size);
    for(int i=0; i<ans.size(); i++){
        cout << ans.at(i) << " ";
    }
    return 0;
}