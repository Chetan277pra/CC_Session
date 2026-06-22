// Problem: Asuna and the Mosquitoes
// Contest: 2092
// Link: https://codeforces.com/contest/2092/problem/C
// Submission id: 379789280

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(auto & a : vec) cin >> a;
        int even = 0 , odd = 0;
        for(auto a : vec) if(a % 2) odd++; else even++;
        if(even == 0 or odd == 0) {
            cout << *max_element(vec.begin() , vec.end()) <<"\n";
            continue;
        }
        int tot = accumulate(vec.begin() , vec.end() , 0ll);
        tot = tot - odd + 1;
        cout << tot <<"\n";
 
    }
    return 0;
}
// 5  4  3  2  9
// 1  1  1  2  1
// 3 1 1 1 
// 1 1 1 1 2 2 2
// 7 1 1 1

// 1 1 3 1  2
// 1 1 1 5


