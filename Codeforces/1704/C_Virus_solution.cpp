// Problem: Virus
// Contest: 1704
// Link: https://codeforces.com/contest/1704/problem/C
// Submission id: 382229393

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int tt;
    cin >> tt;
 
    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> vec(m);
        for (int i = 0; i < m; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        vector<int> diff;
        for (int i = 1; i < m; i++)
        {
            int gap = vec[i] - vec[i - 1] - 1;
            if (gap > 0)
                diff.push_back(gap);
        }
        int gap = vec[0] + n - vec[m - 1] - 1;
        if (gap > 0)
            diff.push_back(gap);
 
        sort(diff.rbegin(), diff.rend());
        int curr = 0;
        int shi = 0;
        for (int i = 0; i < diff.size(); i++)
        {
            int rem = diff[i] - 2 * curr;
            if (rem <= 0)
                continue;
            if (rem == 1)
            {
                shi += 1;
                curr += 1;
            }
            else
            {
                shi += rem - 1;
                curr += 2;
            }
        }
 
        cout << n - shi << "\n";
    }
 
    return 0;
}