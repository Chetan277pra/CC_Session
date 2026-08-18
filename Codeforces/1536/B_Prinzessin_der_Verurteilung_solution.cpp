// Problem: Prinzessin der Verurteilung
// Contest: 1536
// Link: https://codeforces.com/contest/1536/problem/B
// Submission id: 387592735

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        bool found = false;
 
        for (char a = 'a'; a <= 'z' && !found; a++) {
            string x(1, a);
 
            if (s.find(x) == string::npos) {
                cout << x << '\n';
                found = true;
            }
        }
 
        if (found) continue;
 
        for (char a = 'a'; a <= 'z' && !found; a++) {
            for (char b = 'a'; b <= 'z' && !found; b++) {
                string x;
                x += a;
                x += b;
 
                if (s.find(x) == string::npos) {
                    cout << x << '\n';
                    found = true;
                }
            }
        }
 
        if (found) continue;
 
        for (char a = 'a'; a <= 'z' && !found; a++) {
            for (char b = 'a'; b <= 'z' && !found; b++) {
                for (char c = 'a'; c <= 'z'; c++) {
                    string x;
                    x += a;
                    x += b;
                    x += c;
 
                    if (s.find(x) == string::npos) {
                        cout << x << '\n';
                        found = true;
                        break;
                    }
                }
            }
        }
    }
 
    return 0;
}