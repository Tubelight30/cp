#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int l = 0;
  int r = 1000000;
  while(l!=r){
    int mid = (l+r+1)/2;

    cout<<mid;
    cout<<endl;
    string resp;
    cin>>resp;
    if(resp == "<"){
        r = mid-1;
    }else{
        l = mid;
    }
  }
  cout<<"! "<<l;
  cout<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}