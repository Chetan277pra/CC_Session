// Problem: Vlad and a Sum of Sum of Digits
// Contest: 1926
// Link: https://codeforces.com/contest/1926/problem/C
// Submission id: 376432966

#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    int count = 0;
    while(n > 0){
        count += n%10;
        n /= 10;
    }
    return count;
}

int main(){
    int limit = 1e6;
    vector<int> dp(1e6 , 0);
    for(int i = 1; i < limit; i++){
        dp[i] += fun(i) + dp[i-1];
    }
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        cout << dp[n]<<"\n";
    }
    return 0;
}