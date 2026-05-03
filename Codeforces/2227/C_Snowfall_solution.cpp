// Problem: Snowfall
// Contest: 2227
// Link: https://codeforces.com/contest/2227/problem/C
// Submission id: 373432254

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n ;
        cin >> n;
        vector<int> vec(n);
        for(auto &a : vec) cin >> a;
        vector<int> two;
        vector<int> three;
        vector<int> extra;
        vector<int> six;
        for(auto a : vec){
            if(a%6 == 0) six.push_back(a);
            else if(a%2 == 0) two.push_back(a);
            else if(a%3 == 0) three.push_back(a);
            else extra.push_back(a);
        }
        vector<int> ans;
        ans = six;
        for(auto a : two) ans.push_back(a);
        for(auto a : extra) ans.push_back(a);
        for(auto a : three) ans.push_back(a);
        for(auto a : ans) cout << a <<" ";
        cout<<endl;
    }
}