// Problem: chtn
// Contest: 2069
// Submission id: 334482414

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        
         bool flag = true;
        vector<int> vec(n-2);

        
        for(int i = 0; i < n-2; i++)
            cin >> vec[i];

        // For n = 3 or 4, answer is YES directly
        if(n < 4){
            cout << "YES" << endl;
            continue;
        }

       

        for(int i = 0; i < n-4; i++){
            if(vec[i] == 1 && vec[i+1] == 0 && vec[i+2] == 1){
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
