// Problem: Iskander and Drawings
// Contest: 2244
// Link: https://codeforces.com/contest/2244/problem/A
// Submission id: 382945103

#include <iostream>
using namespace std;
 
int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxi = 0;
        int i = 0;
        while( i < n){
            if(s[i] == '*') {i++; continue;}
            int j = i;
            while(j < n and s[j] == '#') j++;
            maxi = max(maxi , j-i);
            i = j;
        }
        cout << (maxi+1)/2<<"\n";
    }
    return 0;
}