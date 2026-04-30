// Problem: Berpizza
// Contest: 1468
// Link: https://codeforces.com/contest/1468/problem/C
// Submission id: 373146118

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    queue<int> qu;
    priority_queue<pair<int,int>> pq;

    vector<bool> vis(q + 5, false);

    int id = 0;

    while(q--) {
        int t;
        cin >> t;

        if(t == 1) {
            int m;
            cin >> m;
            id++;

            qu.push(id);
            pq.push({m, -id});
        }
        else if(t == 2) {
            while(vis[qu.front()])
                qu.pop();

            int x = qu.front();
            qu.pop();

            vis[x] = true;
            cout << x << " ";
        }
        else {
            while(vis[-pq.top().second])
                pq.pop();

            int x = -pq.top().second;
            pq.pop();

            vis[x] = true;
            cout << x << " ";
        }
    }
}