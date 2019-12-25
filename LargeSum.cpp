#include <bits/stdc++.h>
using namespace std;
string arr[1003];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int carry = 0;
    char ans[52];
    for (int i = 49; i >= 0; i--) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[j][i] - '0';
        }
        sum += carry;
        ans[i] = '0' + (sum % 10);
        carry = sum / 10;
    }
    cout << carry;
    int y = 0;
    while (carry) {
        carry /= 10;
        y++;
    }
    for (int i = 0; i < 10 - y; i++)
        cout << ans[i];
}
