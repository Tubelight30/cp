#include <bits/stdc++.h>
using namespace std;

void solve()
{
  unordered_map<int,int> mp;
  unordered_set<int> st;
  st.insert(1);
  int n = 100;
  bool prime[n + 1] = {true};
      memset(prime, true, sizeof(prime));

  for (int p = 2; p * p <= n; p++)
  {
    if(prime[p] == true){
      for(int i = p*p;i<=n;i+=p){
        prime[i] = false;
      }
    }
  }
  for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

int main()
{
  // int t = 0;
  // cin>>t;
  // while(t--){
  // solve();
  // }
  vector<int> v1;
  // string s;
  int i = 3;
  string s = to_string(i);
  char t = s[1];
  cout<<t;
  return 0;
}