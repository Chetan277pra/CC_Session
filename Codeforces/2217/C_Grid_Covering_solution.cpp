// Problem: Grid Covering
// Contest: 2217
// Link: https://codeforces.com/contest/2217/problem/C
// Submission id: 370310711

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
    int n , m , a , b;
    cin >> n >> m >> a >> b;
    if(__gcd(m , b) ==1 and __gcd(n , a) == 1 and __gcd(n , m) < 3)
    cout<<"YES\n";
    else cout<<"NO\n";
    }
    return 0;
}