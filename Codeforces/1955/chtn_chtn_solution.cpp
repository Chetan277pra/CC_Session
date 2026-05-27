// Problem: chtn
// Contest: 1955
// Submission id: 376312410

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        long long k;
        cin>>n>>k;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        long long l=(k+1)/2,r=k/2;
        int ans=0,i=0,j=n-1;
        while(i<n&&l>=a[i]) {
            l-=a[i];
            ans++;
            i++;
        }
        while(j>=i&&r>=a[j]) {
            r-=a[j];
            ans++;
            j--;
        }
        if(i==j&&a[i]<=l+r) ans++;
        cout<<ans<<"\n";
    }
    return 0;
}