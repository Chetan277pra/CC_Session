#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string , int> mpp;
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        mpp[temp]++;
    }
    int maxf = 0;
    string ans ="";
    for(auto a: mpp){
        if (a.second > maxf){
            maxf = a.second;
            ans = a.first;
        }
    }
    cout<<ans;
    return 0;
}
