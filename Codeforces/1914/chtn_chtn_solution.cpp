// Problem: chtn
// Contest: 1914
// Submission id: 384786934

#include <bits/stdc++.h>
using namespace std;

#define int long long

struct Node {
    int val, idx;
};

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        vector<Node> A, B, C;

        for (int i = 0; i < n; i++) {
            A.push_back({a[i], i});
            B.push_back({b[i], i});
            C.push_back({c[i], i});
        }

        auto cmp = [](Node x, Node y) {
            return x.val > y.val;
        };

        sort(A.begin(), A.end(), cmp);
        sort(B.begin(), B.end(), cmp);
        sort(C.begin(), C.end(), cmp);

        int ans = 0;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    int x = A[i].idx;
                    int y = B[j].idx;
                    int z = C[k].idx;

                    if (x != y && y != z && x != z) {
                        ans = max(ans, A[i].val + B[j].val + C[k].val);
                    }
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}