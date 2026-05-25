// Problem: Expected Median
// Contest: 1999
// Link: https://codeforces.com/contest/1999/problem/F
// Submission id: 376052813

#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> fact;
int mod = 1e9 + 7;

int power(int a , int b){

    int ans = 1;

    while(b > 0){

        if(b & 1 )
            ans = (1LL * ans * a ) % mod;

        a = (1LL * a * a ) % mod;
        b >>= 1;
    }

    return ans;
}

void factorial(int a){

    fact.assign(a + 1 , 1);

    for(int i = 2; i <= a; i++){

        fact[i] = (1LL * fact[i-1] * i) % mod;
    }
}

int inverse(int a){

    return power(a , mod-2);
}

int ncr(int n , int r){

    if(r > n || r < 0)
        return 0;

    int ans = fact[n];

    ans = (1LL * ans * inverse(fact[r])) % mod;
    ans = (1LL * ans * inverse(fact[n-r])) % mod;

    return ans;
}

int cal(int ones , int zero , int k){

    int tot = 0;

    for(int i = (k+1)/2 ; i <= k; i++){

        if(i > ones || (k-i) > zero)
            continue;

        tot += (1LL * ncr(ones , i) * ncr(zero , k-i)) % mod;
        tot %= mod;
    }

    return tot;
}

int32_t main(){

    int tt;
    cin >> tt;

    while(tt--){

        int n , k;
        cin >> n >> k;

        vector<int> vec(n);

        for(auto & a : vec )
            cin >> a;

        int ones = accumulate(vec.begin() , vec.end() , 0);
        int zero = n - ones;

        factorial(n);

        cout << cal(ones , zero , k) << "\n";
    }
}