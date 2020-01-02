#include <bits/stdc++.h>
#define INF 102222222
#define ll long long int
using namespace std;
bool cmp(ll a, ll b)
{
    int p[10];
    memset(p, 0, sizeof(p));
    ll n = a;
    while (n) {
        p[n % 10]++;
        n /= 10;
    }
    n = b;
    while (n) {
        p[n % 10]--;
        n /= 10;
    }
    ll ans = 0;
    for (int i = 0; i < 10; i++)
        ans += abs(p[i]);
    return ans == 0;
}
int main()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 9; i <= n; i++) {
        bool f = true;
        vector<long long int> v;

        for (int j = 2; j <= k; j++) {
            if (!cmp(i, j * i)) {
                f = false;
                break;
            }
            v.push_back(j * i);
        }
        if (f) {
            cout << i << " ";
            for (int d = 0; d < v.size(); d++)
                cout << v[d] << " ";
            cout << endl;
        }
    }
}
