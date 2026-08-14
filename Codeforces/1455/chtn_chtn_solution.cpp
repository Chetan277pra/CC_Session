// Problem: chtn
// Contest: 1455
// Submission id: 387064927

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int k = 0;

        while (k * (k + 1) < 2 * x)
            k++;

        if (k * (k + 1) / 2 == x + 1)
            k++;

        cout << k << '\n';
    }

    return 0;
}