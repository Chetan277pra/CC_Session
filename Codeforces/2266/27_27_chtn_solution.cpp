// Problem: 27_chtn
// Contest: 2266
// Submission id: 391473665

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        // cout  << n << " " << s << endl;
        int ans = INT_MAX;
        int curr = 0;
        int zerotoone = 0;
        int one = 0 , zero = 0;
        for(auto a  : s) if(a == '0') zero++; else one++;
        if(s[0] == '1') {
            cout << zero<<"\n";
            continue;
        }
        ans = min(ans , one);
        for(int i = n-1; i >= 0; i--){
            if(s[i] == '1') one--;
            else {zerotoone++; zero--;};
            ans = min(ans , one+zerotoone);
        }
        cout << ans <<"\n";
    }
    return 0;
}