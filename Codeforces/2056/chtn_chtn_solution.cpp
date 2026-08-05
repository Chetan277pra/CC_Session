// Problem: chtn
// Contest: 2056
// Submission id: 385786033

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

        if (n == 6) {
            cout << "1 1 2 3 1 2\n";
        } else {
            cout << 1 << " " << 2 << " ";
            for (int i = 3; i <= n - 2; i++) {
                cout << i << " ";
            }
            cout << 1 << " " << 2 << "\n";
        }
    }

    return 0;
}