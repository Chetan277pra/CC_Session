// Problem: LIS or Reverse LIS?
// Contest: 1682
// Link: https://codeforces.com/contest/1682/problem/C
// Submission id: 367141802

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int tt;
    cin >> tt;
    while(tt--){
      
        int n;
        cin >> n;
        vector<int> vec(n);
        for(auto &a : vec) cin >> a;
 
        map<int,int> ms;
        for(auto a : vec){
            ms[a]++;
        }
        int t = 0; 
        int s = 0; 
        for(auto it : ms){
            if(it.second > 1) t++;
            else s++;
        }
        int ans = t + (s+1) / 2; 
        cout << ans << "\n";
    }
}