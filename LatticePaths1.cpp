#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int arr[600][600];
int main()
{   
    for(int i=1;i<=500;i++){
      arr[i][1]=i+1;
      arr[1][i]=i+1;
    }
    for(int i=2;i<=500;i++){
      for(int j=2;j<=500;j++){
        arr[i][j]=(arr[i-1][j]+arr[i][j-1])%MOD;
        arr[j][i]=(arr[i-1][j]+arr[i][j-1])%MOD;
      }
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      int a,b;
      cin>>a>>b;
      cout<<arr[a][b]<<endl;
    }
}
