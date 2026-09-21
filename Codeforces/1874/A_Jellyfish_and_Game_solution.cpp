// Problem: Jellyfish and Game
// Contest: 1874
// Link: https://codeforces.com/contest/1874/problem/A
// Submission id: 391351169

#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    int tt;
    cin >> tt;
 
    while (tt--) {
        int n, m, k;
        cin >> n >> m >> k;
 
        vector<int> A(n), B(m);
 
        for (auto &a : A) cin >> a;
        for (auto &b : B) cin >> b;
 
        if (k > 10) {
            k -= (k - 10) / 2 * 2;
        }
 
        for (int it = 0; it < k; it++) {
            sort(A.begin(), A.end());
            sort(B.begin(), B.end());
 
            if (it % 2 == 0) {
                if (A[0] < B.back()) {
                    swap(A[0], B.back());
                }
            }
            else {
                if (B[0] < A.back()) {
                    swap(B[0], A.back());
                }
            }
        }
 
        cout << accumulate(A.begin(), A.end(), 0LL) << '\n';
    }
 
    return 0;
}