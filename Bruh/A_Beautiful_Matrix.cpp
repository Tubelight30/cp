#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[5][5];
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                arr[i][j] = x;
                int ans = abs(i - 2) + abs(j - 2);
                cout << ans << endl;
                break;
            }
        }
    }
}

int main()
{
    // int t = 0;
    // cin>>t;
    // while(t--){
    solve();
    // }

    return 0;
}