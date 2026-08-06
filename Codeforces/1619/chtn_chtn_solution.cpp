// Problem: chtn
// Contest: 1619
// Submission id: 385970437

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {

        long long a, s;
        cin >> a >> s;

        string ans = "";
        bool ok = true;

        while (a > 0) {

            if (s == 0) {
                ok = false;
                break;
            }

            int x = a % 10;
            int y = s % 10;

            if (y >= x) {
                ans.push_back(char('0' + (y - x)));
                a /= 10;
                s /= 10;
            }
            else {

                if (s < 10) {
                    ok = false;
                    break;
                }

                int z = s % 100;

                if (z < 10 || z > 18) {
                    ok = false;
                    break;
                }

                int d = z - x;

                if (d < 0 || d > 9) {
                    ok = false;
                    break;
                }

                ans.push_back(char('0' + d));
                a /= 10;
                s /= 100;
            }
        }

        if (!ok) {
            cout << -1 << "\n";
            continue;
        }

        while (s > 0) {
            ans.push_back(char('0' + s % 10));
            s /= 10;
        }

        reverse(ans.begin(), ans.end());

        int i = 0;
        while (i + 1 < ans.size() && ans[i] == '0')
            i++;

        cout << ans.substr(i) << "\n";
    }
}