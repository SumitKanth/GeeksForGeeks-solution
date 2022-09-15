// Q. Last index of One
#include<bits/stdc++.h>
using namespace std;

int lastIndex(string s) {
    for(int i=s.size()-1; i>=0; i--) {
        if(s[i] == '1') return i;
    }

    return -1;
}

int main(){
    string s = "00100101001100011000";

    cout << lastIndex(s) << endl;
    return 0;
}