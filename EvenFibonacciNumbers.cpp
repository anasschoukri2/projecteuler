#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long int fibo[100];
    fibo[0] = fibo[1] = 1;
    for (int i = 2; i < 100; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    //cout<<fibo[80];
    for (int a0 = 0; a0 < t; a0++) {
        long long int n;
        cin >> n;
        int j = 2;
        long long int ans = 0;
        while (fibo[j] <= n && j < 100) {
            ans += fibo[j];
            j += 3;
        }
        cout << ans << endl;
    }

    return 0;
}
