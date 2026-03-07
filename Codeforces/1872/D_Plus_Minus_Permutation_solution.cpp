// Problem: Plus Minus Permutation
// Contest: 1872
// Link: https://codeforces.com/contest/1872/problem/D
// Submission id: 365769820

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        ll n,x,y;
        cin >> n >> x >> y;

        ll l = lcm(x,y);

        ll a = n/x;
        ll b = n/y;
        ll c = n/l;

        ll p = a - c;
        ll q = b - c;

        ll s1 = p*(2*n - p + 1)/2;
        ll s2 = q*(q + 1)/2;

        cout << s1 - s2;
        cout<<"\n";
    }

    return 0;
}