// Problem: Euclid, Sequence and Two Numbers
// Contest: 2234
// Link: https://codeforces.com/contest/2234/problem/A
// Submission id: 377881128

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(auto & a: vec) cin >> a;
        sort(vec.rbegin() , vec.rend());
        bool ok = true;
        for(int i = 1; i < n-1; i++){
            if(vec[i-1]%vec[i] != vec[i+1]) {
                ok = false;
                break;
            }
        }
        if(ok){
            cout << vec[0]<<" "<<vec[1]<<"\n";
        }
        else cout << -1<<"\n";
    }
    return 0;
}