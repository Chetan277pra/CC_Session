// Problem: Palindrome, Twelve and Two Terms
// Contest: 2234
// Link: https://codeforces.com/contest/2234/problem/B
// Submission id: 378222514

#include <bits/stdc++.h>
using namespace std;

#define int long long

bool p(int x){
    string s = to_string(x), t = s;
    reverse(t.begin(), t.end());
    return s == t;
}
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;

    vector<int> v = {0,121,242,99,88,77,66,55,44,33,22,11};

    while(tt--){
        int n;
        cin >> n;

        if(n >= 242){
            int a = v[n % 12];
            cout << a << ' ' << n - a << '\n';
        }else{
            bool f = 0;
            for(int a = 0; a <= n; a++){
                if(p(a) && (n - a) % 12 == 0){
                    cout << a << ' ' << n - a << '\n';
                    f = 1;
                    break;
                }
            }
            if(!f) cout << -1 << '\n';
        }
    }
}