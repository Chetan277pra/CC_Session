// Problem: Scuza
// Contest: 1742
// Link: https://codeforces.com/contest/1742/problem/E
// Submission id: 376922222

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n , q;
        cin >> n >> q;
        vector<int> vec(n);
        for(auto & a : vec) cin >> a;
        vector<int> ques(q);
        for(auto & a : ques) cin >> a;
        vector<int> maxi(n);
        maxi[0] = vec[0];
        for(int i = 1 ; i < n; i++) maxi[i] = max(maxi[i-1] , vec[i]);
        for(int i = 1; i < n; i++) vec[i] += vec[i-1];
        vector<int> ans;
        for(auto a : ques){
            auto it = upper_bound(maxi.begin() , maxi.end() , a);
            // if(it == m)
            if(it != maxi.begin()){
                // cout<<*it<<" ";
                int ind = it - maxi.begin() - 1;
                ans.push_back(vec[ind]);
                // cout<<ind<<endl;
            }
        else ans.push_back(0);
        }
        for(auto a : ans) cout << a << " ";
            cout<<endl;
    }
}