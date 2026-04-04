// Problem: The 67th Permutation Problem
// Contest: 2218
// Link: https://codeforces.com/contest/2218/problem/C
// Submission id: 369649793

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> ans;
        int l = 1, r = 3*n;
        for(int i = 0; i < n; i++){
            ans.push_back(l++);
            ans.push_back(r--);
            ans.push_back(r--);
        }
        for(auto a : ans) cout<<a<<" ";
            cout<<endl;
    }
  return 0;
}