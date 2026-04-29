// Problem: Disturbing Distribution
// Contest: 2226
// Link: https://codeforces.com/contest/2226/problem/A
// Submission id: 372970826

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(auto & a : vec) cin >> a;
        int tot = 0;
        for(int i = 0; i < n-1; i++){
            if(vec[i] == 1 and vec[i+1] >= 1) continue;
            tot += vec[i];
        }
        tot += vec[n-1];
        cout<<tot<<"\n";
    }
    return 0;
}