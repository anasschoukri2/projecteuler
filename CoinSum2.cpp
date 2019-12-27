#include <bits/stdc++.h>
using namespace std;
int coins[8]={1,2,5,10,20,50,100,200};
int ways[300000];
int main() {
    ways[0]=1;
    for(int j=0;j<8;j++){
            for(int i=coins[j];i<=100000;i++){
              ways[i]=(ways[i-coins[j]]%1000000007+ways[i]%1000000007)%1000000007;
            }
    }
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      cout<<ways[n]<<endl;
    }
}
