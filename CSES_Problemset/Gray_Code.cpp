#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
// https://www.javatpoint.com/gray-code-in-digital-electronics
//! follow the diagram in above link easy code
{
  int n;
  cin >> n;
  string all = "0000000000000000";
  string ini = all.substr(0, n);
  unordered_set<string> s1;
  s1.insert(ini);
  cout << ini << endl;
  int div;
  for (int j = pow(2, n) - 1; j > 0; j--)
  {
    if (ini[n - 1] == '0')
    {
      ini[n - 1] = '1';
    }
    else
    {
      ini[n - 1] = '0';
    }
    if (s1.find(ini) == s1.end())
    {
      cout << ini << endl;
      s1.insert(ini);
    }
    else
    {
      ini[n - 1] == '0' ? ini[n - 1] = '1' : ini[n - 1] = '0';
      div = n - 2;
      while (true && div >= 0)
      {
        string temp = ini;
        temp[div] == '0' ? temp[div] = '1' : temp[div] = '0';
        if (s1.find(temp) != s1.end())
        {
          div--;
        }
        else
        {
          ini = temp;
          break;
        }
      }
      s1.insert(ini);
      cout << ini << endl;
    }
  }
}

int32_t main()
{
  solve();
  return 0;
}