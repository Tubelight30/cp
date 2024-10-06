#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  if(n<=10) {
    cout<<1<<endl;
    cout<<n<<endl;
    return;
  }
  int k = 0;
  string num = to_string(n);
  for(int i = 0;i<num.size();i++){
    if(num[i] != '0'){
        k++;
    }
  }
  int power = -1;
  cout<<k<<endl;
  while(n>0){
    power++;
    int dig = n%10;
    if(dig != 0){
        cout<<dig*pow(10,power)<<" ";
    }
    n/=10;
  }
  cout<<endl;


}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}