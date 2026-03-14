// Problem: Bingo Candies
// Contest: 2208
// Link: https://codeforces.com/contest/2208/problem/A
// Submission id: 366647369

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<vector<int>> vec(n , vector<int>(n));
        map<int , int> mpp;
        for(auto & a : vec){
            for(auto & b : a) cin >> b;
        }
        for(auto a : vec){
            for(auto b  : a ) mpp[b]++;
        }
        int maxi = 0;
        for(auto  a: mpp) maxi = max(maxi , a.second);
        cout<<((maxi > n*(n-1))?"NO\n":"YES\n");
    }
    return 0;
}