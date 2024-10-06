#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  long double sum = 0;
  for(int i = 0;i<n;i++){
    long double temp;
    cin>>temp;
    sum+=temp;
  }
  long double volfrac = sum/(n*100);
  cout<<volfrac*100<<endl;
}

int main(){
    solve();

    return 0;
}