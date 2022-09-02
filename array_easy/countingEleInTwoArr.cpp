// Q. Counting elements in two arrays
#include<bits/stdc++.h>
using namespace std;

vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n){
    sort(arr2, arr2+n);

    vector <int> ans;
    int s, e, count;
    for(int i=0; i<m; i++){
        s = 0, e = n-1, count = 0;
        while(s<=e){
            int mid = (s + e) / 2;
            if(arr2[mid] > arr1[i]){
                e = mid - 1;
            }
            else if(arr2[mid] <= arr1[i]) {
                s = mid + 1;
            }
        }
        ans.push_back(s);
    }

    return ans;

}

int main(){
    int arr1[] = {34, 91, 23, 45, 50, 1};
    int arr2[] = {89, 48, 34, 45, 73, 49, 51};
    int m = sizeof(arr1) / sizeof(arr1[0]), n = sizeof(arr2)/sizeof(arr2[0]);

    vector <int> ans = countEleLessThanOrEqual(arr1, arr2, m , n);

    for(int i=0; i<ans.size(); i++){
        cout << ans.at(i) << " ";
    }
    cout << endl;

    return 0;       
}


/*
// Another code Taking O(n^2) time complexity
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n){
    vector<int> ans;
    for(int i=0; i<m; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr1[i] >= arr2[j]){
                count++;
            }
        }
        ans.push_back(count);
    }
    return ans;
}
*/
