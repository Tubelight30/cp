#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << -1 << endl;
    return;
  }
  int total = (n*(n+1))/2;
  int sq = sqrt(total);
  if(sqrt(total) ==  sq){
    cout<<-1<<endl;
    return;
  }
  vector<int> ans(n);
  
  int first_ele = n;
  while(first_ele>=1){
    int val = sqrt(first_ele);
    if(sqrt(first_ele) != val){
      break;
    }
    first_ele--;
  }
  ans[0] = first_ele;
  int currsum= first_ele;

  vector<int> permu;
  for(int i = n;i>=1;i--){
    if(i != ans[0]) permu.push_back(i);
  }
  int i = 0;
  while(i<permu.size()){
    int currele = permu[i];
    // int nextsum = currsum+currele;
    int temp  = i;
    int val = sqrt((currsum+permu[temp])*(currsum+permu[temp]));
    while(val == sqrt(currsum+permu[temp]) && temp<permu.size()){
      temp++;
    }
    swap(permu[i],permu[temp]);
    currsum+=permu[i];
    ans[i+1] = permu[i];
    i++;
  }
  int sum1 = 0;
  for (auto i : ans)
  {
    // sum1 += i;
    // cout << sum1 << " " << i << endl;
    cout <<i <<" ";
  }
  cout << endl;
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