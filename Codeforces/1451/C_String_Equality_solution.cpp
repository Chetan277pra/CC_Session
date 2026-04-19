// Problem: String Equality
// Contest: 1451
// Link: https://codeforces.com/contest/1451/problem/C
// Submission id: 371676541

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n , k;
        cin >> n >> k;
        string a , b;
        cin >> a >> b;

        vector<int> fa(26 , 0) , fb(26 , 0);
        for(auto x : a) fa[x - 'a']++;
        for(auto x : b) fb[x - 'a']++;

        bool ok = true;

        for(int i = 0; i < 26; i++){
            if(fa[i] < fb[i]) ok = false;

            int extra = fa[i] - fb[i];

            if(extra % k != 0) ok = false;

            if(i + 1 < 26) fa[i + 1] += extra;
        }

        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}