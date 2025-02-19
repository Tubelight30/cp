#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  string a;
  cin>>a;
  if(a == "z"){
    cout<<-1<<endl;
    return;
  }
  string temp = "";
//   char big = a[0]+1;
//   temp+=big;
  for(int i = 0;i<n;i++){
    temp+="z";
  }
//   temp = temp+ a.substr(1,a.size()-2)+temp;
  if(temp>a) cout<<temp<<endl;
  else cout<<-1<<endl;
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