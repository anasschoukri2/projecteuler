#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int coins[8]={1,2,5,10,20,50,100,200};
int dp[100007][10];
int cnt(int x,int i){
    
    if(x==0)return 1;
    if(i<0||x<0)return 0;
    if(dp[x][i]!=-1)return dp[x][i];
    return dp[x][i]=(cnt(x-coins[i],i)%MOD+cnt(x,i-1)%MOD)%MOD;
}

int main() {
    memset(dp,-1,sizeof(dp));
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      cout<<cnt(n,7)<<endl;
    }
}
