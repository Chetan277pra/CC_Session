// Problem: Playing with GCD
// Contest: 1736
// Link: https://codeforces.com/contest/1736/problem/B
// Submission id: 366001695

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<ll>a(n+2);

        a[0]=1;
        for(int i=1;i<=n;i++) cin>>a[i];
        a[n+1]=1;

        vector<ll>b(n+2);

        for(int i=1;i<=n+1;i++)
            b[i]=lcm(a[i-1],a[i]);

        bool ok=true;

        for(int i=1;i<=n;i++){
            if(gcd(b[i],b[i+1])!=a[i]){
                ok=false;
                break;
            }
        }

        cout<<(ok?"YES":"NO")<<"\n";
    }
}