// Problem: Arena of Greed
// Contest: 1425
// Link: https://codeforces.com/contest/1425/problem/A
// Submission id: 367933778

#include <bits/stdc++.h>
using namespace std;

long long ans = 0;

void solve(long long n, bool turn){
    if(n == 0) return;

    if(n % 2){
        if(turn) ans += 1;
        solve(n - 1, !turn);
    }
    else{
        long long x = n / 2;
        if(x % 2 || x == 2){
            if(turn) ans += x;
            solve(x, !turn);
        }
        else{
            if(turn) ans += 1;
            solve(n - 1, !turn);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while(tt--){
        long long n;
        cin >> n;

        ans = 0;
        solve(n, true);

        cout << ans << "\n";
    }

    return 0;
}