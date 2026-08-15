// Problem: chtn
// Contest: 1512
// Submission id: 387181764

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> vec(n+2);
        for(auto & a : vec) cin >> a;
        int tot = accumulate(vec.begin() , vec.end() , 0LL);
        int leave = -1;
        int sum = -1;
        map<int , int> mpp;
        for(auto a : vec) mpp[a]++;
        for(auto a : vec){
            int temp = tot - a;
            if(temp%2) continue;
            temp /= 2;
            if(mpp.find(temp) == mpp.end()) continue;
            if(a == temp and mpp[temp] == 1) continue;
            leave = a;
            sum = temp;
            break;
        }
        if(leave == -1){
            cout << -1 << endl;
            continue;
        }
        vector<int> ans;
        for(auto a : vec){
            if(a == leave){
                leave = -1;
                continue;
            }
            if(a == sum){
                sum = -1;
                continue;
            }
            ans.push_back(a);
        }

        for(auto a : ans ) cout << a << " ";
        cout << "\n";
    }
    return 0;
}