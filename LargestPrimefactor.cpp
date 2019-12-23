#include <bits/stdc++.h>
#define MAX 1000006
using namespace std;
bool isprime(long long int x)
{
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}
long long int n;
int lowestfactor(long long int y)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0 && isprime(i) == 1)
            return i;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {

        cin >> n;
        if (isprime(n)) {
            cout << n << endl;
        }
        else {
            int ans = 1;
            int k = lowestfactor(n);
            while (k != 1) {
                ans = max(ans, (int)k);
                if (isprime(n / k))
                    ans = max(ans, (int)(n / k));
                n /= k;
                k = lowestfactor(n);
            }
            cout << ans << endl;
        }
    }

    return 0;
}
