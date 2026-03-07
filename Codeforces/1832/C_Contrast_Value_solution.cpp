// Problem: Contrast Value
// Contest: 1832
// Link: https://codeforces.com/contest/1832/problem/C
// Submission id: 365760128

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for(int i=0;i<n;i++)
            cin >> a[i];
 
        vector<long long> b;
 
        for(int i=0;i<n;i++){
            if(i==0 || a[i]!=a[i-1])
                b.push_back(a[i]);
        }
 
        int m = b.size();
 
        if(m==1){
            cout<<1<<"\n";
            continue;
        }
 
        int ans = 2;
 
        for(int i=1;i<m-1;i++){
            if((b[i]-b[i-1])*(b[i+1]-b[i])<0)
                ans++;
        }
 
        cout<<ans<<"\n";
    }
}
 
 