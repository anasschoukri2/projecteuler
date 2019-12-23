#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        vector<int> l{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41 };
        vector<int> v;
        long long int n;
        cin >> n;
        long long int ans = 1;
        for (int i = 1; i <= n; i++) {
            if ((ans % i) != 0) {
                v.push_back(i);
                ans *= i;
            }
            for (int i = v.size() - 1; i >= 0; i--) {
                for (int j = 0; j < i; j++) {
                    if (v[i] % v[j] == 0) {
                        ans /= v[j];
                        v[j] = 1;
                    }
                }
            }
        }

        cout << ans;
    }
    return 0;
}
