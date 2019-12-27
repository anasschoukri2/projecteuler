#include <bits/stdc++.h>
using namespace std;
unsigned long long int c[2000][2000];
int main()
{
    int o;
    unsigned long long int k;
    cin >> o >> k;
    for (int i = 1; i <= 1020; i++) {
        c[i][1] = 1;
        for (int j = 2; j <= i; j++) {
            if (c[i - 1][j - 1] > k || c[i - 1][j] > k)
                c[i][j] = k + 10;
            else
                c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
        }
    }

    unsigned long long int ans = 0;
    o++;
    for (int n = 0; n <= o; n++)
        for (int i = 0; i <= n + 10; i++) {
            //cout<<c[n][i]<<" ";
            if (c[n][i] > k) {
                ans++;
            }
        }
    cout << ans;
}
/*
1
1 1
1 2 1
1*/
