// Problem: chtn
// Contest: 1272
// Submission id: 389119576

#include <bits/stdc++.h>
using namespace std;

int main() 
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