#include <bits/stdc++.h>
using namespace std;
bool prime[10000058];
void Sieve(int n)
{
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == false) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = true;
        }
    }
}
vector<int> u;
vector<vector<int> > vv;
void cnt(vector<int> v, int i, int k, int n)
{
    if (k == v.size()) {
        vv.push_back(v);
        return;
    }
    for (int j = i + 1; j < n; j++) {
        v.push_back(j);
        cnt(v, j, k, n);
        v.pop_back();
    }
}
int sto(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
        ans = ans * 10 + s[i] - '0';
    return ans;
}
string stt(int i)
{
    string ans = "";
    while (i) {
        ans = " " + ans;
        ans[0] = (i % 10 + '0');
        i /= 10;
    }
    return ans;
}
vector<string> e;
void change(vector<int> v,string n)
{
   for(int i=(v[0]==0);i<10;i++){
        string s=n;
        for(int k=0;k<v.size();k++){ 
            s[v[k]]=i+'0'; 
        }
        if(!prime[sto(s)]){
          e.push_back(s);
        }
  }
}
bool valid(int n, int k)
{
    int a = n;
    int p[10];
    memset(p, 0, sizeof(p));
    while (a) {
        p[a % 10]++;
        a /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (p[i] >= k)
            return true;
    return false;
}
bool match(vector<int> v, string s)
{
    for (int i = 1; i < v.size(); i++)
        if (s[v[i]] != s[v[i - 1]])
            return false;
    return true;
}
int main()
{
    Sieve(10000000);
    int n, k, l;
    cin >> n >> k >> l;
    int a = pow(10, n - 1) - 1, b = pow(10, n);
    for (int i = a; i <= b; i++) {
        if (!prime[i] && valid(i, k))
            u.push_back(i);
    }
    long long int ans = 0;
    vector<int> v;
    cnt(v, -1, k, n);
    for (int i = 0; i < u.size(); i++) {
        for (int j = vv.size() - 1; j >= 0; j--) {
            string s=stt(u[i]);
            if (match(vv[j], s)) {
                e.clear();
                change(vv[j], s);
                if (e.size() >= l) {
                    for (int i = 0; i < l; i++)
                        cout << e[i] << " ";
                    return 0;
                }
            }
        }
    }

    return 0;
}
