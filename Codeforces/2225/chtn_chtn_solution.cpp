// Problem: chtn
// Contest: 2225
// Submission id: 372469039

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int two = 0;

        int n = s.length();
        int temp = 1;
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]) two+=1; 
        }

        if(two > 2) cout<<"NO\n";
        else cout<<"YES\n"; 
    }
    return 0;
}