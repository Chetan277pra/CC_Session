// Problem: Limited Repainting
// Contest: 2070
// Link: https://codeforces.com/contest/2070/problem/C
// Submission id: 377385829

#include<bits/stdc++.h>
using namespace std;
#define int long long
bool check(vector<int> vec , int k , int curr, string s, int n){
    int tot = 0;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(s[i] == 'B'){
            if(!flag){
                if(vec[i] <= curr) {
                    // curr -= vec[i];
                    continue;
                }
                tot++;
                flag = true;
            }
        }
        else{
            if(flag){
                if(vec[i] <= curr) continue;
                else{
                    flag = false;
                }
            }
        }
    }
    return tot <= k;
}
int32_t main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> penalty(n);
        for(auto & a : penalty) cin >> a;
        int l = 0, r = accumulate(penalty.begin(),penalty.end() , 0ll);
        // int ans = 0;
        // bool ans = check(penalty,k,3,s,n);
        // cout<<ans;
        // return 0;

        while(l < r){
            int mid = l + (r - l)/2;
            if(check(penalty,k,mid,s,n)){
                r = mid;
            }
            else l = mid+1;
        }
        cout << l <<"\n";
    }
    return 0;
}