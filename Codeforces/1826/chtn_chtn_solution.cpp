// Problem: chtn
// Contest: 1826
// Submission id: 384418904

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> l(n);
        for (int i = 0; i < n; i++)
            cin >> l[i];

        bool found = false;

        for (int x = 0; x <= n; x++) {
            int cnt = 0;

            for (int i = 0; i < n; i++) {
                if (l[i] > x)
                    cnt++;
            }

            if (cnt == x) {
                cout << x << "\n";
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << "\n";
    }

    return 0;
}