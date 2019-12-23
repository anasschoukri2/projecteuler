#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        int n;
        cin >> n;
        n--;
        long long int ans3 = floor((double)n / 15);
        ans3 = 15 * ans3 * (ans3 + 1) / 2;
        long long int ans = floor((double)n / 3);
        ans = 3 * (ans) * (ans + 1) / 2;
        long long int ans2 = floor((double)n / 5);
        ans2 = 5 * (ans2) * (ans2 + 1) / 2;
        cout << ans + ans2 - ans3 << endl;
    }
    return 0;
}
