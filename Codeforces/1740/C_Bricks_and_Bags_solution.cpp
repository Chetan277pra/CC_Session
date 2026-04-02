// Problem: Bricks and Bags
// Contest: 1740
// Link: https://codeforces.com/contest/1740/problem/C
// Submission id: 369385110

#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin() , vec.end()
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(auto & a : vec) cin >> a;
        sort(all(vec));
        int maxi = 0;
        for(int i = 2; i < n; i++){
            int temp = 0;
            temp += vec[i] - vec[0];
            temp += vec[i] - vec[i-1];
            maxi = max(maxi , temp);
        }
        for(int i = n-3; i >= 0; i--){
            int temp = 0;
            temp += vec[n-1] - vec[i];
            temp += vec[i+1] - vec[i];
            maxi = max(maxi , temp);
        }
        cout<<maxi<<"\n";
    }
    return 0;
}