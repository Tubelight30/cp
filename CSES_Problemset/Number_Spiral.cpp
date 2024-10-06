#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int x,y;
  cin>>y>>x;

  int ans;

  //if y>x we calculate ans from y and add/sub x
  //else we calc ans using x and add/sub y
  //!Purely observational code
  int z = max(y,x);
  int z2;
  if(z%2 != 0){// z is odd
    if(z == y){
      z2 = (z-1)*(z-1);
      ans = z2+x;
    }else{
      z2 = z*z;
      ans = z2-y+1;

    }
  }
  else{// z is even
    if(z == y){
      z2 = (z)*(z);
      ans = z2-x+1;
    }else{
      z2 = (z-1)*(z-1);
      ans = z2+y;
    }
  }
  cout<<ans<<endl;

}

int32_t main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}