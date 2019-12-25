#include <bits/stdc++.h>
using namespace std;
int rr[5000007];
short int cnt(long long int i)
{
    // cout<<i<< " ";
    if (i == 1)
        return 1;

    short int ans = 0;
    if (i % 2 == 0)
        ans += cnt(i / 2) + 1;
    else
        ans += cnt(3 * i + 1) + 1;
    return ans;
}
int main()
{
    short int maxi = 0;
    for (int i = 1; i < 5000000; i++) {
        //maxi=max(maxi,dp[i]);
        if (cnt(i) >= maxi) {
            maxi = cnt(i);
            rr[i] = i;
        }
        else
            rr[i] = rr[i - 1];
    }
    short int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << rr[n] << endl;
    }
}
