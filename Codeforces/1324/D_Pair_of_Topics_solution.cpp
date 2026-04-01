// Problem: Pair of Topics
// Contest: 1324
// Link: https://codeforces.com/contest/1324/problem/D
// Submission id: 369268722

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

int32_t main(){
    int n;
    cin >> n;
    vector<int> t(n);
    vector<int> s(n);
    for(auto &a : t) cin >> a;
    for(auto &a : s) cin >> a;
    int ans = 0;
    ordered_set st;
    for(int i = n-1; i >= 0; i--){
        int d = t[i] - s[i];
        ans += st.size()  - st.order_of_key(-d+1);
        st.insert(d);
    }
    cout<<ans;
    return 0;
}