// Problem: 1-1
// Contest: 2207
// Link: https://codeforces.com/contest/2207/problem/A
// Submission id: 365908359

#include <iostream>
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
      for(int i = 1; i < n-1 ; i++){
        if(s[i-1]=='1' and s[i]=='0' and s[i+1]=='1') s[i] = '1';
      }
      int maxi = 0;
      for(auto a : s) if(a == '1' ) maxi++;
      int mini = 0;
      int curr = 0;
      // cout<<s<<endl;
      for(int i = 0;i < n; i++){
        if(s[i] == '0'){
          mini += curr - (curr-1)/2;
          curr = 0;
        }
        else curr++;
      }
      mini += curr - (curr-1)/2;
      
      cout<<mini<<" "<<maxi;
      cout << "\n";
    }
    return 0;
}