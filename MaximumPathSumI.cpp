#include <bits/stdc++.h>
using namespace std;
int arr[20][20];
int rzlt[20][20];
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cin >> arr[i][j];
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                rzlt[i][j] = max(rzlt[i - 1][j], rzlt[i - 1][j - 1]) + arr[i][j];
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans = max(ans, rzlt[n][i]);
        }
        cout << ans << endl;
    }
}
