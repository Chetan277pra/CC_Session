// Problem: Long Multiplication
// Contest: 1954
// Link: https://codeforces.com/contest/1954/problem/C
// Submission id: 374319385

#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        string a , b;
        cin >> a >> b;
        bool pahla = false;
        if(a[0] > b[0]) pahla = true;
        int n = a.length();
        bool brabar = false;
        if(a[0] == b[0]) brabar = true;
        for(int i = 1; i < n; i++){
            // pahla bda hai t dusra bda kar
            if(brabar){
                if(a[i] < b[i]) {
                    pahla = false;
                    brabar = false;
                    continue;
                }
                else if(a[i] > b[i]){
                    pahla = true;
                    brabar = false;
                    continue;
                }
                else continue;
            }
            if(pahla){
 
                if(a[i] > b[i])
                    swap(a[i] , b[i]);
 
            }
            else{
                // dusra bda hai
 
                if(a[i] < b[i])
                    swap(a[i] , b[i]);
 
            }
        }
        cout<<a<<"\n";
        cout<<b<<"\n";
    }
    return 0;
}