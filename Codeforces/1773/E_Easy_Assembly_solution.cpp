// Problem: Easy Assembly
// Contest: 1773
// Link: https://codeforces.com/contest/1773/problem/E
// Submission id: 367811418

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

int main(){
    int n;
    cin >> n;

    vector<vector<int>> vec(n);
    vector<int> ans;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        for(int j = 0; j < temp; j++){
            int inp;
            cin >> inp;
            vec[i].push_back(inp);
            ans.push_back(inp);
        }
    }

    sort(all(ans));
    map<int,int> mpp;
    for(int i = 0; i < (int)ans.size(); i++){
        mpp[ans[i]] = i;
    }

    int dist = 0, join = 0;

    for(int i = 0; i < n; i++){
        for(int j = 1; j < (int)vec[i].size(); j++){
            if(mpp[vec[i][j]] != mpp[vec[i][j-1]] + 1){
                dist++;
            }
        }
    }

    join = n + dist - 1;

    cout << dist << " " << join;
    return 0;
}