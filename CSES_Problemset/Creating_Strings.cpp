#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
  string s;
  cin >> s;
  map<char, int> mp;
  for (int i = 0; i < s.length(); i++)
  {
    mp[s[i]]++;
  }
  vector<string> ans;
  sort(s.begin(), s.end());
  ans.push_back(s);
  while (next_permutation(s.begin(), s.end()))
  {
    ans.push_back(s);
  }
  cout<<ans.size()<<endl;
  for(auto ele: ans){
    cout<<ele<<endl;
  }
}

int32_t main()
{
  solve();
  return 0;
}