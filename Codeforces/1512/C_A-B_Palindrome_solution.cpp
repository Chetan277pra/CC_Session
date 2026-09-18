// Problem: A-B Palindrome
// Contest: 1512
// Link: https://codeforces.com/contest/1512/problem/C
// Submission id: 391058559

#include <iostream>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        int a, b;
        cin >> a >> b;

        string s;
        cin >> s;

        int n = s.length();

        for (int i = 0; i < n / 2; i++) {
            int j = n - i - 1;

            if (s[i] != '?' && s[j] != '?' && s[i] != s[j]) {
                cout << -1 << '\n';
                goto next;
            }

            if (s[i] == '?')
                s[i] = s[j];

            else if (s[j] == '?')
                s[j] = s[i];
        }

        for (char c : s) {
            if (c == '0')
                a--;
            else if (c == '1')
                b--;
        }

        if (a < 0 || b < 0) {
            cout << -1 << '\n';
            goto next;
        }

        if (n % 2 == 1 && s[n / 2] == '?') {
            if (a % 2 == 1) {
                s[n / 2] = '0';
                a--;
            }
            else if (b % 2 == 1) {
                s[n / 2] = '1';
                b--;
            }
        }

        if (a % 2 != 0 || b % 2 != 0) {
            cout << -1 << '\n';
            goto next;
        }

        for (int i = 0; i < n / 2; i++) {
            int j = n - i - 1;

            if (s[i] == '?' && s[j] == '?') {
                if (a >= 2) {
                    s[i] = s[j] = '0';
                    a -= 2;
                }
                else if (b >= 2) {
                    s[i] = s[j] = '1';
                    b -= 2;
                }
            }
        }

        if (a != 0 || b != 0)
            cout << -1 << '\n';
        else
            cout << s << '\n';

        next:;
    }

    return 0;
}