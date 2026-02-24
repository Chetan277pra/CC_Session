#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int k;
        cin >> k;
        string s;
        cin >> s;
        int n = s.size();
        vector<int> onepos;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') onepos.push_back(i);
        }
        if(onepos.size() < k){
            cout << "0\n";
            return 0;
        }
        int nn = onepos.size();
        if(k == 0){
         long long z = 0;
          long long c = 0;
          for(int i = 0 ;i < n ; i++){
            if(s[i] == '0') c++;
            else{
              z += (c*(c+1)/2);
              c = 0;
            }
            // cout <<" c: "<<c<< " z : "<<z<<endl;
          }
          z += (c*(c+1)/2);
          cout << z << "\n";
          return 0;
        }
        // int prev = 0;
        // for(auto  a: onepos) cout << a << " ";
        // cout << "\n";
        long long ans = 0;
        for(int i = k-1 ; i < nn; i++){
            // 2 k = 3 wala case
            if(i == k-1){
              int l = onepos[0];
              int r = (i+1 < nn ? onepos[i+1] : s.size()) - onepos[i];
              l += 1;
              ans += (long long)l * r;
              // cout<<"l : "<<l<<" r : "<<r<<" ans : "<<ans<<endl;
            }
            else{
            int left = onepos[i-k+1] - onepos[i-k];
            int right = (i+1 < nn ? onepos[i+1] : s.size()) - onepos[i];
            left = max(left , 1);
            ans += (long long)left * right;   
            // cout<<" left : "<<left<<" right : "<<right<<" ans : "<<ans<<endl;
            }
        }
        cout << ans << "\n";
    
    return 0;
}
