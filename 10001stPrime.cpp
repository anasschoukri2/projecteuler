#include <bits/stdc++.h>
using namespace std;
bool  prime[100000007];
int main(){
    int t;
    cin >> t;
    vector<long long int >v;

    for(int i=2;i<=1000000;i++){
        if(!prime[i]){
        v.push_back(i);
        for(int j=2*i;j<=1000000;j+=i){
              prime[j]=true;
        }
        }
    }
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        cout<<v[n-1]<<endl;
    }
    return 0;
}

