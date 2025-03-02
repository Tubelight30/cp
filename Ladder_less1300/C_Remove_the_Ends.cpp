#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  if (n == 1)
  {
    cout << abs(v[0]) << endl;
    return;
  }
  vector<int> posum(n);
  vector<int> negsum(n);
  // posum[0] = 0;
  if (v[0] > 0)
  {
    posum[0] = v[0];
  }
  for (int i = 1; i < n; i++)
  {
    posum[i] = posum[i - 1];
    if (v[i] > 0)
    {
      posum[i] += v[i];
    }
  }

  if (v[n - 1] < 0)
  {
    negsum[n - 1] = -v[n - 1];
  }

  for (int i = n - 2; i >= 0; i--)
  {
    negsum[i] = negsum[i + 1];
    if (v[i] < 0)
    {
      negsum[i] -= v[i];
    }
  }
  // for(auto i:posum){
  //   cout<<i<<" ";
  // }
  // cout<<"     ";
  // for(auto i:negsum){
  //   cout<<i<<" ";
  // }
  // cout<<endl;
  int maxi = 0;
  for (int i = 0; i < n; i++)
  {
    maxi = max(maxi, posum[i] + negsum[i]);
  }
  cout << maxi << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 0;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}