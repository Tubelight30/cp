#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  for(int i = n+1;i<=INT_MAX;i++){
    int a = i/1000;
    int b = i/100 % 10;
    int c = i/10 % 10;
    int d = i%10;
    if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout<<i<<endl;
            break;
        }
  }
}

int main(){
    // int t = 0;
    // cin>>t;
    // while(t--){
        solve();
    // }

    return 0;
}