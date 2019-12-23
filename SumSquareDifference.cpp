#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        long long int ans=(n*(n+1)/2)*(n*(n+1)/2)-((n*(n+1)*(2*n+1))/6);
        cout<<ans<<endl;
    }
    return 0;
}

