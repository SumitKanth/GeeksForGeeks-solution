#include<bits/stdc++.h>
using namespace std;

// Optimized code. Time Complexity O(n) bcoz no nested loop is used. and Space Complexity O(1) bcoz no extra space is used.
void binSort(int A[], int N) {
    // Checking how many 0 and 1 are present in array
    int numOfZeros = 0, numOfOnes = 0;
    for(int i=0; i<N; i++) {
        if(A[i] == 0) numOfZeros++;
        else numOfOnes++;
    }

    // Filling all 0 first
    for(int i=0; i<numOfZeros; i++) A[i] = 0;

    // Filling remaing value which is 1
    int oneInd = numOfZeros + numOfOnes;
    for(int i=numOfZeros; i<oneInd; i++) A[i] = 1;

}

void printArr(int A[], int N) {
    for(int i=0; i<N; i++) cout << A[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {1, 0, 1, 1, 1, 1, 1, 0, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    binSort(arr, size);

    printArr(arr, size);
    
    return 0;
}

/*
// By brute force. Time Complexity O(n^2) bcoz of nested loop. and Space Complexity O(1) bcoz no extra space is used.
void binSort(int A[], int N) {
    for(int i=0; i<N-1; i++) {
        int valInd = i;
        for(int j=i+1; j<N; j++) {
            if(A[i] > A[j]) valInd = j;
        }
        swap(A[i], A[valInd]);
    }
}
*/