#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
bool isprime[70000000];
long long int ps[2000008];
int main()
{
    int t;
    cin >> t;
    for (int i = 2; i < 6000000; i++) {
        if (!isprime[i]) {
            //cout<<i<<endl;
            for (int j = 2 * i; j < 6000000; j += i) {
                isprime[j] = true;
            }
        }
    }
    for (int i = 2; i < 2000007; i++) {
        if (!isprime[i]) {
            //cout<<i<<endl;
            ps[i] = ps[i - 1] + i;
        }
        else
            ps[i] = ps[i - 1];
    }

    for (int a0 = 0; a0 < t; a0++) {
        int n;
        cin >> n;
        cout << ps[n] << endl;
    }
    return 0;
}
