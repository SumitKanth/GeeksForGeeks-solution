#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n) and Space Complexity O(1)
int convertFive(int n){
    string s = to_string(n);
    for(int i=0; i<s.length(); i++) if(s.at(i) == '0') s[i] = '5';

    n = stoi(s);
    return n;
}

int main(){
    int n = 10029;
    cout << convertFive(n) << endl;
    return 0;
}

/*
// Another solution.    Time Comeplexity O(n)
int convertFive(int n){
    int val = 0;
    vector<int> ans;
    while(n != 0) {
        val = n % 10;
        ans.push_back(val);
        n = n / 10;
    }

    reverse(ans.begin(), ans.end());
    int size = ans.size();

    for(int i=0; i<size; i++) if(ans[i] == 0) ans[i] = 5;

    int num = 0;
    for(int i=0; i<size; i++) num = (num * 10) + ans[i];

    return num;
}
*/