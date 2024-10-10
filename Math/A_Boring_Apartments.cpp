#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int j = 0;j<n;j++){
    cin>>v[j];
  }
  for(int k = 0;k<n;k++){
    int start = 1;
    int sum = 0;
    int i = 1;
    while(start < 10000){
        if(start == v[k]){
            sum+=log10(start)+1;
            break;
        }
        sum+=log10(start)+1;

        start = start*10+i;
        if(start>10000){
            start = i+1;
            i++;
        }
    }
    cout<<sum<<endl;
  }
}

int32_t main(){
    // int t = 0;
    // cin>>t;
    // while(t--){
        solve();
    // }

    return 0;
}