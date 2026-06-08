// Problem: chtn
// Contest: 2051
// Submission id: 377806734

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(m),v(n+1);
        for(int i=0;i<m;i++)cin>>a[i];
        for(int i=0,x;i<k;i++)cin>>x,v[x]=1;
        if(k<n-1){
            for(int i=0;i<m;i++)cout<<'0';
            cout<<"\n";
            continue;
        }
        if(k==n){
            for(int i=0;i<m;i++)cout<<'1';
            cout<<"\n";
            continue;
        }
        int miss=0;
        for(int i=1;i<=n;i++)if(!v[i]){miss=i;break;}
        for(int x:a)cout<<(x==miss);
        cout<<"\n";
    }
}