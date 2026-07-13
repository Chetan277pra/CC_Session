// Problem: chtn
// Contest: 2246
// Submission id: 382335774

#include <iostream>
using namespace std;
#define int long long
int32_t main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        if(n == 1) {cout << 1 <<"\n"; continue;}
        if(n == 2) {cout << -1 <<"\n"; continue;}
        cout << 1 <<" " << 2 <<" ";
        int curr = 3;
        for(int i = 2; i < n; i++){
            cout << curr<<" ";
            curr <<= 1;
        }
        cout <<"\n";
    }
    return 0;
}