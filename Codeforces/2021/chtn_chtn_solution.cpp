// Problem: chtn
// Contest: 2021
// Submission id: 387307793

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<long long> a(n);

        for (auto &v : a)
            cin >> v;

        sort(a.begin(), a.end());

        map<int, long long> last;

        for (auto &v : a) {
            int r = v % x;

            if (last.count(r)) {
                v = max(v, last[r] + x);
            }

            last[r] = v;
        }

        sort(a.begin(), a.end());

        long long mex = 0;

        for (long long v : a) {
            if (v == mex)
                mex++;
            else if (v > mex)
                break;
        }

        cout << mex << '\n';
    }

    return 0;
}