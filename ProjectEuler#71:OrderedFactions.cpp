#include <bits/stdc++.h>
using namespace std;
long long int cmp(long long int a,long long int b,long long int c,long long int d){
    if(a*d-b*c==0)return 0;
    if(a*d-b*c<0)return 1;
    return 2;
}
int main()
{   ios::sync_with_stdio(0);
    cin.tie(0);
     int t;  
    cin>>t; 
    long long int a,b,n;
    while(t--){
   
    cin>>a>>b>>n;
    long long int c=0,d=1,e=1,f=1,x=-1,y=-1;
    while(cmp(e,f,a,b)&&cmp(c,d,a,b)&&y<=n){
             x=e+c;
             y=f+d;
            if(cmp(x,y,a,b)==1){c=x;d=y;}
            else {
                e=x;f=y;
            }
           // cout<<c<<" "<<d<<" "<<x<< " "<<y<<" "<<e<<" "<<f<<endl;
    }
    while(d<n){ 
        x=e+c;
        y=f+d;
        if(y>n)break;
        c=x;
        d=y;
        
    }
    cout<<c<<" "<<d<<"\n";}
  
    
}
