#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  int sumn = (n*(n+1))/2;
  if(sumn%2 != 0){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
    vector<int> v(n,0);
    int div = sumn/2;
    int count = 0;
    for(int i = n;i>=1;i--){
        if(div>=i){
            count++;
            div-=i;
            v[i-1] =1;
        }
        if(div == 0){
            break;
        }
    }
    cout<<count<<endl;
    for(int i = 0;i<n;i++){
        if(v[i] == 1){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
    cout<<n-count<<endl;
    for(int i = 0;i<n;i++){
        if(v[i] == 0){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
  }
}

int32_t main(){
        solve();
    return 0;
}