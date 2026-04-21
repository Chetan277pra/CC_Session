// Problem: Red-Black Pairs
// Contest: 2225
// Link: https://codeforces.com/contest/2225/problem/C
// Submission id: 372040261

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
string a, b;
vector<int> dp;

int rec(int i){
    if(i < 0) return 0;

    if(dp[i] != -1) return dp[i];

    int uppar = (a[i] != b[i]) + rec( i-1 );

    int sidha = INT_MAX;
    if(i > 0){
        int cost = 0;
        if(a[i] != a[i-1]) cost++;
        if(b[i] != b[i-1]) cost++;
        sidha = cost + rec( i-2 );
    }
    return dp[i] = min( uppar , sidha);
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt; 
    while (tt--) {
        cin >> n;
        cin >> a >> b;
        dp.assign(n , -1);
        cout << rec(n-1) << '\n';
    }

    return 0;
}