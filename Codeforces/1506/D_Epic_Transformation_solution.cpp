// Problem: Epic Transformation
// Contest: 1506
// Link: https://codeforces.com/contest/1506/problem/D
// Submission id: 370831024

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
        for(auto & a : vec) cin >> a;
        vector<int> count;
        map<int , int> mpp;
        for(auto a : vec) mpp[a]++;
        for(auto a : mpp) count.push_back(a.second);
        int maxi = *max_element(count.begin() , count.end());
        int left = 2*maxi - n;
        if(left == n){
            cout<<n<<"\n";
            continue;
        }
        if(left < 0 and n&1) left = 1; 
        left = max(0 , left);
        cout<<left<<"\n";
    }
    return 0;
}
