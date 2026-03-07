// Problem: Needle in a Haystack
// Contest: 2174
// Link: https://codeforces.com/contest/2174/problem/A
// Submission id: 365731701

#include <bits/stdc++.h>
using namespace std;
int main(){
  int tt;
  cin >> tt;
  while(tt--){
    string sm  , lr;
    cin >> sm >> lr;
    map<char , int> mpp;
    for(auto a : lr) mpp[a]++;
    bool ok = true;
    for(auto a : sm) {
      if(mpp[a] == 0){
        ok = false;
        break;
      }
      mpp[a]--;
      
    }
    if(!ok){
      cout<<"Impossible";
      cout<<"\n";
      continue;
    }
    lr = "";
    for(auto a : mpp) {
      while(a.second > 0) {
        lr += a.first;
        a.second--;
      }
    }
    string ans;
    sort(lr.begin() , lr.end());
    bool aagechota = false;
    int n = sm.length() , m = lr.length();
    int i = 0;
    for(int i = 0; i < n-1; i++) {
      if(sm[i] > sm[i+1]){
        aagechota = true;
        break;
      }
    }
    int j = 0;
    i = 0;
    // cout<<" sm : "<<sm <<" lr : "<<lr<<endl;
    while(i < n and j < m){
      if(sm[i] < lr[j]){
        ans += sm[i++];
      }
      else if(sm[i] == lr[j] and aagechota) ans += sm[i++];
      else ans += lr[j++];
    }
    while(i < n) ans += sm[i++];
    while(j < m) ans += lr[j++];
    
    cout<<ans;
    cout<<"\n";
    
  }
  return 0;
}