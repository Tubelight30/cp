#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void solve(){
  int n,c;
  cin>>n>>c;
  vector<int> v(n);
  int sum = 0;
  int area = 0;
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  int l = 1, r = 1e9;
  int ans = 0;
  while(l<=r){
    int mid = (l+r)/2;
    int sumall = 0;
    for(int i = 0;i<n;i++){
        sumall+= (v[i]+2*mid)*(v[i]+2*mid);
        if(sumall>c) break;
    }
    if(sumall== c){
        ans = mid;
        break;
    }
    if(sumall>c)r = mid-1;
    else l = mid+1;
  }
  cout<<ans<<endl;
//   c = c-area;
//   __int128_t b = 4*sum;
//   __int128_t a = 4*n;
//   __int128_t discri = b*b - (4 *a *-1*c);
//   __int128_t sq = sqrt((long double)discri);
//   __int128_t ans  = ((-1*b)+sq);
//   ans = ans/(2*a);
//   cout<<(int)ans<<endl;
//   cout<<ans<<endl;
  return;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
