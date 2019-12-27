#include <bits/stdc++.h>
using namespace std;
int d[10000008];
int cnt(int x){
    int sum=1;

    for(int i=2;i<sqrt(x);i++){
      if(x%i==0)sum+=i+x/i;
    }
    sum+=((floor(sqrt(x))==ceil(sqrt(x)))*sqrt(x));
    return sum;
}
long long p[100008];
int main() {

    for(int i=2;i<=100000;i++){
        d[i]=cnt(i);
    }
    
    for(int i=1;i<=100000;i++){
      p[i]=p[i-1];
      if(i==d[d[i]]&&i!=d[i]){
        p[i]+=i;
      }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<p[n]<<endl;
    }
}
