#include <bits/stdc++.h>
using namespace std;
vector<int> l{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
int main()
{
    int t;
    cin >> t;
    while (t--) {
        unsigned long long int n;
        cin >> n;
        n--;
        unsigned long long int y = 1;
        int i = 0;
        while (1<= n / l[i]&&i<l.size()) {
           n/=l[i];
           y*=l[i];  
           i++;
        }
        cout << y << endl;
    }
}
