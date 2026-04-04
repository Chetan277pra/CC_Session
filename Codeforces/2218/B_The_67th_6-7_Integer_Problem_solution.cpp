// Problem: The 67th 6-7 Integer Problem
// Contest: 2218
// Link: https://codeforces.com/contest/2218/problem/B
// Submission id: 369635042

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        vector<int> vec(7);
        for(auto & a : vec) cin >> a;
        int tot = accumulate(vec.begin(), vec.end(), 0);
        int maxi = *max_element(vec.begin(), vec.end());
        // cout<<tot<<" "<<maxi<<endl;
        tot -= maxi;
        int sum = maxi- tot;
        cout<<sum<<"\n";
    }
  return 0;
}