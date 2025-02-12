#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << n;
        return;
    }
    vector<int> v;
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    int start = 1;
    int count = 7;
    while (!q.empty())
    {
        if(start%2 == 1){
            int a = q.front();
            q.pop();
            q.push(a);
        }else{
            int a = q.front();
            q.pop();
            cout<<a<<" ";
        }
        start = (start+1)%2;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}