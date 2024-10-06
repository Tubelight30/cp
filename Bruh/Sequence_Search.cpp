#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long a,b,k;
  cin>>a>>b>>k;
  vector<long long> ans;
  set<long long> s1;
  s1.insert(0);
  s1.insert(a);
  s1.insert(b);
  ans.push_back(0);
  ans.push_back(a);
  ans.push_back(b);
  if(k<=3){
    auto it = next(s1.begin(), k-1);
    cout<<*it<<endl;
    return;
  }
  
  auto it = next(s1.begin(), 2);
  for(long long i = 4;i<=k+1;i++){
    long long temp = ans[i-1-1] + ans[i-2-1]- ans[i-3-1];
    ans.push_back(temp);
    s1.insert(temp);
  }

  for(long long i = 0;i<k-3;i++){
    it++;
  }
  cout<<*(it)<<endl;
}

int main(){
    long t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}