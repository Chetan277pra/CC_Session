// Problem: MUH and Cube Walls
// Contest: 471
// Link: https://codeforces.com/contest/471/problem/D
// Submission id: 377109594

#include<bits/stdc++.h>
using namespace std;

vector<int> sea(vector<int> &pat, vector<int> &txt) {
        // code here
        int n = pat.size(), m = txt.size();
        vector<int> ans;
        vector<int> lps(n , 0);
        int i = 1, k = 0;
        while(i < n){
            if(pat[i] == pat[k]){
                    lps[i++] = ++k;
            }
            else{
                if(k != 0) k = lps[k - 1];
                else{
                    lps[i++] = 0;
                }
            }
        }
        i = 0, k = 0;
        while(i < m ){
            if(txt[i] == pat[k]) {i++; k++;}
            if(k == n) {
                ans.push_back(i-n);
                k = lps[k - 1];
            }
            else if(i < m and txt[i] != pat[k] ){
                k ? k = lps[k - 1] : i++;
            }
        }

        return ans;
    }


int main(){
    int n , m;
    cin >> n >> m;
    vector<int> txt(n) , pat(m);
    for(auto & a : txt) cin >> a;
    for(auto & a : pat) cin >> a;
    vector<int> pool;
    if(n > 1)
    for(int i = 1; i < n; i++){
        pool.push_back(txt[i-1] - txt[i]);
    }
    else pool = txt;
    vector<int> search;
    vector<int> ans;
    if(m > 1){
        for(int i = 1; i < m; i++)
        search.push_back(pat[i-1] - pat[i]);
        ans = sea(search , pool);
        cout << ans.size();
    }
    else cout << n;

    return 0;
}