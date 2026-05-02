// Problem: Party Monster
// Contest: 2227
// Link: https://codeforces.com/contest/2227/problem/B
// Submission id: 373346955

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0;
        for(auto x : s) if(x == '(') a++; else b++;
        
        if(a == b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}