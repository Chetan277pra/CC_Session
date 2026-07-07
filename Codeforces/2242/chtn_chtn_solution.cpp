// Problem: chtn
// Contest: 2242
// Submission id: 381621534

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
        sort(vec.rbegin() , vec.rend());

        if(vec[0] == 1 ){
            cout << "NO\n";
        }
        else if(vec[0] > 2){
            cout << "YES\n";
        }
        else if(n == 1){
            cout << "NO\n";
        }
        else if(vec[1] > 1 ){
            cout << "YES\n";
        }
        else{
            cout <<"NO\n";
        }
    }
    return 0;
}