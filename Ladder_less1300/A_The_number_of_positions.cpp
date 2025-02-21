#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int total,atleast,atmost;
  cin>>total>>atleast>>atmost;
  int posi = 1;
  int curr = atleast+1;
  if(atleast+atmost+1>=total)posi+=total-curr;
  else {
    curr+=total - (atleast+atmost+1);
    posi += total-curr;
  }
  cout<<posi<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}