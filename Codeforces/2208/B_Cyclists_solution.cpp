// Problem: Cyclists
// Contest: 2208
// Link: https://codeforces.com/contest/2208/problem/B
// Submission id: 366674813

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, k , p , m;
        cin >> n >> k >> p >> m;
        vector<int> vec(n);
        for(auto & a : vec) cin >> a;
        if(n == k){
            cout << m/vec[p-1] <<"\n";
            continue;
        }
        // pahle hi andar
        if(k >= p){
            int ans = 1;
            int rem = n - k;
            int cost = vec[p-1];
            m -= cost;
            vec.erase(vec.begin()+ p-1);
            sort(vec.begin() , vec.end());
            for(int i = 0; i < rem; i++) cost += vec[i];
            ans += (m/cost);
            cout<<ans <<"\n";
            continue;
        }
        // bahar hai
        vector<int> temp = vec;
        sort(temp.begin() , temp.begin() + p-1);
        int cost = temp[p-1];
        int rem = p - k;
        int aa = cost;
        for(int i = 0; i < rem; i++) cost += temp[i];
        if(cost > m){
            cout<<0<<"\n";
            continue;
        }
        m -= cost;
        int ans = 1;
        rem = n-k;
        cost = aa;
        vec.erase(vec.begin() + p-1);
        sort(vec.begin() , vec.end());
        for(int i = 0; i < rem; i++) cost += vec[i];
        ans += (m/cost);
        cout<<ans <<"\n";
    }
}