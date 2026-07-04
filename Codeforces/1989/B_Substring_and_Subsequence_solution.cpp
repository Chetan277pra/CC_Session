// Problem: Substring and Subsequence
// Contest: 1989
// Link: https://codeforces.com/contest/1989/problem/B
// Submission id: 381253806

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        string a, b;
        cin >> a >> b;

        int n = a.size();
        int m = b.size();

        int best = 0;

        for (int i = 0; i < m; i++) {
            int j = i;

            for (char c : a) {
                if (j < m && c == b[j])
                    j++;
            }

            best = max(best, j - i);
        }

        cout << n + m - best << "\n";
    }

    return 0;
}