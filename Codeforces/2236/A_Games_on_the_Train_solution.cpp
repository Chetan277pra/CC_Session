// Problem: Games on the Train
// Contest: 2236
// Link: https://codeforces.com/contest/2236/problem/A
// Submission id: 378535434

#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
    int n ;
    cin >> n;
    vector<int> vec(n);
    for(auto & a : vec) cin>> a;
    int mini = *min_element(vec.begin(), vec.end());
    int maxi = *max_element(vec.begin() , vec.end()); 
    cout << maxi - mini + 1 <<"\n";
    }
    
    return 0;
}