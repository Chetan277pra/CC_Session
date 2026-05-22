// Problem: Construct an Array
// Contest: 2231
// Link: https://codeforces.com/contest/2231/problem/A
// Submission id: 375660823

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> ans;
        for(int i = 1; i < 2*n; i+=3){
            ans.push_back(i);
            ans.push_back(i+1);
        }
        for(int i = 0; i < n; i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}