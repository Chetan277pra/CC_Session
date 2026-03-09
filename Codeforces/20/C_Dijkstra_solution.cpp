// Problem: Dijkstra?
// Contest: 20
// Link: https://codeforces.com/contest/20/problem/C
// Submission id: 365978804

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(){
 
        int n , m;
        cin >> n >> m;
        vector<vector<pair<int,int>>> adj(n+1);
        for(int i = 0; i < m; i++){
            int u , v , w;
            cin >> u>>v >> w;
            adj[u].push_back({v,w});
            adj[v].push_back({u , w});
        }
        vector<int> dist(n+1, 1e18);
 
        // for(auto a : adj){
        //     for(auto j : a) cout<<j.first<<" "<<j.second<<"     ";
        //         cout<<endl;
        // }
 
        dist[1] = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        q.push({0 , 1});
        vector<int> parent(n+1 , -1);
        parent[1] = 1;
        while(!q.empty()){
            auto a  = q.top();
            q.pop();
            if(a.first > dist[a.second]) continue;
            for(auto p : adj[a.second]){
                if(dist[a.second]+p.second < dist[p.first]){
                  dist[p.first] = dist[a.second]+p.second;
                  parent[p.first] = a.second;
                  q.push({dist[p.first] , p.first});
                }
 
            }
        }
        // for(auto a : parent) cout<<a<<" ";
        // cout<<endl;
        vector<int> ans;
        int i = n;
        if(parent[i] == -1){
            cout<<-1<<"\n";
            return 0;
        }
        while(i != 1){
            // cout<<" i : "<<i<<endl;
            ans.push_back(i);
            // for(auto a : ans) cout<<a<<" ";
                // cout<<endl;
            i = parent[i];
        }
        // for(auto a : ans) cout<<a<<" ";
        //     cout<<endl;
        ans.push_back(1);
        reverse(ans.begin(), ans.end());
        for(auto a : ans) cout<<a<<" ";
        // for(auto a: dist) cout<<a <<" ";
        // cout<<dist[n];
    return 0;
}