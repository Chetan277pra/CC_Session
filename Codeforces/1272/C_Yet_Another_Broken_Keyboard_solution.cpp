// Problem: Yet Another Broken Keyboard
// Contest: 1272
// Link: https://codeforces.com/contest/1272/problem/C
// Submission id: 389119629

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() 
{
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> vec(26 , 0);
    for(int i = 0; i < k; i++){
        char c; cin >> c;
        vec[c-'a']++;
        // cout << c << " : " << vec[c-'a'] << endl;
    }
    int ans = 0;
    int last = 0;
    for(int i = 0; i < n; i++){
        if(vec[s[i] - 'a'] != 1){
            // cout << i << s[i] << endl;
            int curr = i-last;
            ans += ((curr)*(curr+1))/2;
            last = i+1;
        }
        // cout << i << " " << ans <<endl;
    }
    ans += ((n-last)*(n-last+1))/2;
    cout << ans <<"\n";
    return 0;
}