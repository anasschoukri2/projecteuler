#include <bits/stdc++.h>
using namespace std;
bool palindrom(int n)
{
    int h = 0;
    int u = n;
    while (u) {
        h *= 10;
        h += u % 10;

        u /= 10;
    }
    //cout<<h<<" "<<n<<endl;
    return h == n;
}
vector<int> v;
int main()
{ //cout<<palindrom(11)*11;
    int t;
    cin >> t;
    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j < 1000; j++) {
            if (i * j < 1000000) {
                if (palindrom(i * j)) {
                    v.push_back(i * j);
                }
            }
            else
                break;
        }
    }
    for (int a0 = 0; a0 < t; a0++) {
        long long int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] < n) {
                ans = max(ans, v[i]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
