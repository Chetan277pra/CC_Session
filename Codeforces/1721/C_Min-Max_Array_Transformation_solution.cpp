// Problem: Min-Max Array Transformation
// Contest: 1721
// Link: https://codeforces.com/contest/1721/problem/C
// Submission id: 366531301

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
      int n;
      cin >> n;
      vector<int> a(n) , b(n);
      for(auto & x : a) cin >> x;
      for(auto & x : b) cin >> x;
      vector<int> mini , maxi;
      for(auto x : a){
        int mila = lower_bound(b.begin() , b.end() , x) - b.begin();
        mini.push_back(b[mila] - x);
      }
      multiset<int> ms(b.begin() , b.end());
      
      for(int i = n-1; i >= 0; i--){
        
        maxi.push_back(*prev(ms.end()) - a[i]);
        auto it = ms.lower_bound(a[i]);
        if(it != ms.end())
        ms.erase(it);
      }
      reverse(maxi.begin() , maxi.end());
      
      for(auto x : mini) cout<<x<<" ";
      cout<<"\n";
      for(auto x : maxi) cout<<x<<" ";
      cout<<"\n";
      
    }
    
    
    
    return 0;
}