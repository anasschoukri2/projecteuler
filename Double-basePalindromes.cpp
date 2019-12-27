#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;
int b=2;
vector<long long int>v;
bool palindrom(long long int n)
{
    long long int h = 0;
    long long int u = n;
    while (u) {
        h *= 10;
        h += u % 10;

        u /= 10;
    }
    //cout<<h<<" "<<n<<endl;
    return h == n;
}
long long  tod(string s){
    int i=0;
    long long int ans=0;
    while(i<s.size()){
        ans+=pow(b,i)*(s[i]-'0');
        i++;
    }
    //cout<<s<<" "<<ans<<endl;
    return ans;
}
void cnt(string s){
    string a=s;
    reverse(a.begin(),a.end());
    string g=s+a;
    
    long long int n=tod(g);
    if(palindrom(n)){
      v.push_back(n);
    }
    
    string y=s;
    for(int i=s.size()+1;i<g.size();i++){
        y+=g[i];
    }
     n=tod(y);
    if(palindrom(n)){
      v.push_back(n);
    }
    if(pow(b,g.size())>=MAX) return;
    int k=s.size();
    for(int i=0;i<b;i++){
        string g=s+" ";
        g[k]=i+'0';
        cnt(g);
        
    }
}
int main() { 
    int n;
     cin>>n>>b;
    string s=" ";
    for(int i=1;i<b;i++){
      s[0]=i+'0'; cnt(s);
    }
     long long int ans =0;
     for(int i=0;i<v.size();i++){
        if(v[i]<=n)ans+=v[i];
     }
     cout<<ans;
    
    return 0;
}
