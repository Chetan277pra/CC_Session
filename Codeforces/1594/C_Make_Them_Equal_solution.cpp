// Problem: Make Them Equal
// Contest: 1594
// Link: https://codeforces.com/contest/1594/problem/C
// Submission id: 377513920

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        string s;
        cin>>n>>c>>s;

        bool ok=1;
        for(char ch:s) if(ch!=c) ok=0;

        if(ok){
            cout<<0<<"\n";
            continue;
        }

        int x=-1;
        for(int i=1;i<=n;i++){
            bool good=1;
            for(int j=i;j<=n;j+=i){
                if(s[j-1]!=c){
                    good=0;
                    break;
                }
            }
            if(good){
                x=i;
                break;
            }
        }

        if(x!=-1){
            cout<<1<<"\n"<<x<<"\n";
        }else{
            cout<<2<<"\n"<<n<<" "<<n-1<<"\n";
        }
    }
    return 0;
}