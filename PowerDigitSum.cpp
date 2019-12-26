#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
string towpower[10009];
int sum[10004];
int main()
{
    towpower[0] = '1';
    for (int i = 1; i <= 10000; i++) {
        int carry = 0;
        for (int j = towpower[i - 1].size() - 1; j >= 0; j--) {
            int a = towpower[i - 1][j] - '0';
            int b = 2 * a;
            b += carry;
            string h = " ";
            h[0] = ((b % 10) + '0');
            towpower[i] = h + towpower[i];
            carry = b / 10;
        }
        while (carry) {
            string h = " ";
            h[0] = ((carry % 10) + '0');
            towpower[i] = h + towpower[i];
            carry /= 10;
        }
        //cout<<i<<" "<< towpower[i]<<endl;
        for (int j = 0; j < towpower[i].size(); j++) {
            sum[i] += towpower[i][j] - '0';
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << sum[n] << endl;
    }
}
