#include <bits/stdc++.h>
using namespace std;
int arr[20000];
int cnt(long long int x)
{
    int ans = 0;
    for (int i = 1; i < sqrt(x); i++) {
        ans += (x % i == 0) * 2;
    }
    ans += (ceil(sqrt(x)) == floor(sqrt(x)));
    //cout<<x<< " " << ans <<endl;
    return ans;
}
int main()
{
    int t;
    cin >> t;
    int j = 0;
    int y = 1;
    int nod[100000];
    for (int i = 1; i < 100000; i++) {
        nod[i] = cnt(i);
    }
    for (int i = 0; i < 100000; i++) {
        int u;
        if (i % 2 == 0)
            u = nod[i / 2] * nod[i + 1];
        else
            u = nod[i] * nod[(i + 1) / 2];
        for (; j <= u; j++) {
            if (!arr[j]) {
                arr[j] = i * (i + 1) / 2;
            }
        } //cout<<j<< " "<< i<<endl;
    }

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << arr[n + 1] << endl;
    }
}
