// Problem: Element Extermination
// Contest: 1375
// Link: https://codeforces.com/contest/1375/problem/C
// Submission id: 367257373

#include<bits/stdc++.h>
using namespace std;
int main(){
  int tt;
  cin >> tt;
  while(tt--){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto & a: vec ) cin >> a;
    cout << ((vec[0] < vec[n-1])?"YES\n":"NO\n");
  }
}