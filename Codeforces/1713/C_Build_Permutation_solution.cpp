// Problem: Build Permutation
// Contest: 1713
// Link: https://codeforces.com/contest/1713/problem/C
// Submission id: 386516387

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> p(n, -1);
 
        for (int i = n - 1; i >= 0; i--) {
            if (p[i] != -1)
                continue;
 
            int k = sqrt(2 * i);
 
            while ((k + 1) * (k + 1) <= 2 * i)
                k++;
 
            int j = k * k - i;
 
            p[i] = j;
            p[j] = i;
        }
 
        for (int x : p)
            cout << x << ' ';
 
        cout << '\n';
    }
 
    return 0;
}