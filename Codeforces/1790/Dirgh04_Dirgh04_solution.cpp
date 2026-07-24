// Problem: Dirgh04
// Contest: 1790
// Submission id: 384101797

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        
            vector<vector<int>> a(n,vector<int>(n-1));

            for(int i=0;i<n;i++){
                for(int j=0;j<n-1;j++){
                    cin >> a[i][j];
                }
            }

            int count1=0,count2=0;

            int val1=a[0][0];
            int val2=0;
            int idx=-1;

            for(int i=0;i<n;i++){
                if(val1!=a[i][0]){
                    val2=a[i][0];
                    idx=i;
                    break;
                }
            }

            for(int i=0;i<n;i++){
                if(val1==a[i][0]){
                    count1++;
                }
                else if(val2==a[i][0]){
                    count2++;
                }
            }

            if(count1>count2){
                cout << val1 << " ";
                for(int i=0;i<n-1;i++){
                    cout << a[idx][i] << " ";
                }
            }

            else{
                cout << val2 << " ";
                for(int i=0;i<n-1;i++){
                    cout << a[0][i] << " ";
                }
            }

            cout << endl;
        
}

    return 0;
}