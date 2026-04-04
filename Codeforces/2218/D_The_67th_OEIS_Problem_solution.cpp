// Problem: The 67th OEIS Problem
// Contest: 2218
// Link: https://codeforces.com/contest/2218/problem/D
// Submission id: 369695606

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> prime;
    vector<bool> isp(900000, true);

    isp[0] = isp[1] = false;
    for (int i = 2; i < 900000; i++) {
        if (isp[i]) {
            prime.push_back(i);
            for (long long j = 1LL * i * i; j < 900000; j += i)
                isp[j] = false;
        }
    }
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        vec[0] = prime[0];
        for (int i = 1; i < n; i++) {
            vec[i] = 1LL * prime[i-1] * prime[i];
        }
        for (auto x : vec) cout<<x<< " ";
        cout << "\n";
    }

    return 0;
}