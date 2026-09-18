// Problem: chtn
// Contest: 1385
// Submission id: 391150462

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
 
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
 
        int pos = n - 1;
 
        while (pos > 0 && a[pos - 1] >= a[pos])
            pos--;
 
        while (pos > 0 && a[pos - 1] <= a[pos])
            pos--;
 
        cout << pos << '\n';
    }
 
    return 0;
}