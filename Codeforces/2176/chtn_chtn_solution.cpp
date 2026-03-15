// Problem: chtn
// Contest: 2176
// Submission id: 366843752

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        ll n,m;
        cin >> n >> m;

        vector<ll> a(n+1);
        for(ll i=1;i<=n;i++)
            cin >> a[i];

        vector<pair<ll,ll>> edges;

        for(ll i=0;i<m;i++){
            ll u,v;
            cin >> u >> v;
            edges.push_back({u,v});
        }

        sort(edges.begin(),edges.end(),
        [&](auto &x,auto &y){
            return a[x.first]+a[x.second] > a[y.first]+a[y.second];
        });

        vector<unordered_map<ll,ll>> dp(n+1);

        ll ans=0;

        for(auto [u,v]:edges){

            ll target=a[u]+a[v];

            ll ways=1;

            if(dp[v].count(target))
                ways=(ways+dp[v][target])%MOD;

            dp[u][a[v]]=(dp[u][a[v]]+ways)%MOD;

            ans=(ans+ways)%MOD;
        }

        cout<<ans<<"\n";
    }
}