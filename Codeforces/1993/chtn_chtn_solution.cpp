// Problem: chtn
// Contest: 1993
// Submission id: 373923390

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while(tt--) {

        int n;
        cin >> n;

        vector<int> even, odd;

        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;

            if(temp % 2) odd.push_back(temp);
            else even.push_back(temp);
        }

        if(odd.empty() || even.empty()) {
            cout << 0 << '\n';
            continue;
        }

        sort(even.begin(), even.end());

        int s = *max_element(odd.begin(), odd.end());

        int ans = even.size();

        for(auto t : even) {
            if(t < s) {
                s += t;
            }
            else {
                ans++;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}