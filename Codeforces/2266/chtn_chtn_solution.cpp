// Problem: chtn
// Contest: 2266
// Submission id: 391689155

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int mini = INT_MAX;
        for(int i = 0; i < 3; i++){
            int temp; cin >> temp;
            mini = min(mini , temp);
        }
        cout << n - mini <<"\n";
    }
    return 0;
}