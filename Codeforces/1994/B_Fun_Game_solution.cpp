// Problem: Fun Game
// Contest: 1994
// Link: https://codeforces.com/contest/1994/problem/B
// Submission id: 366149963

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        string t;
        cin >> s >> t;
        bool hai0 = false , hai1 = false;
        bool ans = true;
        for(int i = 0; i < n; i++){
            if(s[i]==t[i] or t[i] == '0'){
                if(s[i] == '0') hai0 = true;
                else hai1 = true;
                continue;
            }
            // nhi mila and t == 1
            if((s[i] == '1' and !hai0) or (s[i]=='0' and !hai1)){
                ans = false;
                break;
            }
        }
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}