#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,m;
  int count = 0;
  int ratio = 0;
  cin>>n;
  vector<int> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  cin>>m;
  vector<int> b(m);
  for(int i = 0;i<m;i++){
    cin>>b[i];
  }
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        if(b[j]%a[i] == 0){
            ratio = max(ratio,b[j]/a[i]);
        }
    }
  }
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        if(b[j]%a[i] == 0 && b[j]/a[i] == ratio){
            count++;
        }
    }
  }

  cout<<count<<endl;

}

int32_t main(){
        solve();
    return 0;
}