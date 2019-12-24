#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
int arr[4000];
int main(){
    int t;
    cin >> t;
    for(int i=0;i<3004;i++)arr[i]=-1;
    
        for(int j=1;j<2000;j++){
          for(int k=1;k<2000;k++){
            if(floor(sqrt(j*j+k*k))==ceil(sqrt(j*j+k*k))){
                  int i=j+k+sqrt(j*j+k*k);
                  if(i<3004)
                  arr[i]=max((int)(sqrt(j*j+k*k)*j*k),arr[i]);
              
            }
          }
        }
    
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<arr[n]<<endl;
        
    }
    return 0;
}

