#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        int n;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        long long int product = 1;
        long long int ans = 0;
        int j = 0;
        for (int i = 0; i < num.size(); i++) {
            while (j - i < k && j < num.size()) {
                if (num[j] == '0') {
                    i = j + 1;
                    j = i;
                    product = 1;
                    continue;
                }
                product *= (num[j] - '0');
                if (j - i + 1 == k)
                    ans = max(ans, product);
                j++;
            }
            product /= (num[i] - '0');
        }
        cout << ans << endl;
    }
    return 0;
}
