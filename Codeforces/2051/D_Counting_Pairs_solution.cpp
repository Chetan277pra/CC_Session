// Problem: Counting Pairs
// Contest: 2051
// Link: https://codeforces.com/contest/2051/problem/D
// Submission id: 377806447

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll f(vector<ll>&a,ll k){
    int i=0,j=a.size()-1;
    ll c=0;
    while(i<j){
        if(a[i]+a[j]<=k){
            c+=j-i;
            i++;
        }else j--;
    }
    return c;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        ll x,y,s=0;
        cin>>n>>x>>y;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        sort(a.begin(),a.end());
        ll l=s-y,r=s-x;
        cout<<f(a,r)-f(a,l-1)<<"\n";
    }
}