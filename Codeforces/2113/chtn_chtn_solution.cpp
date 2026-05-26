// Problem: chtn
// Contest: 2113
// Submission id: 376217296

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;

    while(tt--) {

        int x , y , a , b;
        cin >> x >> y >> a >> b;

        int a1 , a2 , b1 , b2;
        cin >> a1 >> a2 >> b1 >> b2;

        bool ans = false;

        if(a1 == b1) {
            if(abs(a2 - b2) % b == 0)
                ans = true;
        }
        else if(a2 == b2) {
            if(abs(a1 - b1) % a == 0)
                ans = true;
        }
        else {
            if((a1 - b1) % a == 0 || (a2 - b2) % b == 0)
                ans = true;
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}