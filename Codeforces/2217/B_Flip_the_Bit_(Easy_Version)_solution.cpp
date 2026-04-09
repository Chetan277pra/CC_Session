// Problem: Flip the Bit (Easy Version)
// Contest: 2217
// Link: https://codeforces.com/contest/2217/problem/B
// Submission id: 370449686

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
      int n , k;
      cin >> n >> k;
      vector<int> vec(n);
      for(auto & a : vec) cin >> a;
      int ind;
      cin >> ind;
      bool galat = false;
      int lena = vec[ind-1];
      int l = 0, r = n-1;
      while(l != ind-1 and vec[l] == lena) l++;
      while(r >= ind and vec[r] == lena) r--;
      // ab dona galat pe aa gye
      if(l == ind and r == ind){
        cout<<0<<"\n";
        continue;
      }
      int ans = 0;
      while(l != r){
          // cout<<"ans : "<<ans<<" l : "<<l<<" r : "<<r<<endl;
          if(l != ind-1 and r != ind-1){
            while(l < ind-1 and vec[l] != lena) l++;
            while(r >= ind and vec[r] != lena) r--;
            ans++;
          }
          else if(l != ind-1){
            while(l < ind-1 and vec[l] != lena) l++;
            ans++;
          }
          else{
            while(r >= ind and vec[r] != lena) r--;
            ans++;
          }
            lena = 1-lena;
      }
      cout<< ((lena == vec[ind-1])?ans:ans+1)<<"\n";
    }
    return 0;
}