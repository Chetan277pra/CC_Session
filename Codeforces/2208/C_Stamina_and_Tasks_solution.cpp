// Problem: Stamina and Tasks
// Contest: 2208
// Link: https://codeforces.com/contest/2208/problem/C
// Submission id: 366696443

#include<bits/stdc++.h>
using namespace std;
#define int double
int rec( int n ,vector<int>&point ,  vector<int>&cost ){
    vector<int> dp( n+1 ,0 );
    for( int ind=n-1 ; ind >= 0 ; ind-- ){
        //two choices take or skip
        int take = 0;
        take = point[ind] + ( (100.0 - cost[ind]) /100.0 )*dp[ind+1];
        // skip
        int skip = 0;
        skip =  dp[ind+1];

        dp[ind] =  max( take ,  skip );
    }

    return dp[0];
}
int32_t main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> point(n) ,cost(n);
        for( int i=0;i<n;i++ ) cin>> point[i]  >>cost[i];
        int ans = rec( n , point ,cost );
        cout<< fixed << setprecision(10) << ans <<"\n";
    }
    return 0;
}