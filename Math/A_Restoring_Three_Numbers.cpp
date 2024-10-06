#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long sum = max(a, max(b, max(c, d)));
    long long x1, x2, x3;
    if (sum == a)
    {
        x1 = sum - b;
        x2 = sum - c;
        x3 = sum - d;
    }
    else if (sum == b)
    {
        x1 = sum - a;
        x2 = sum - c;
        x3 = sum - d;
    }
    else if (sum == c)
    {
        x1 = sum - a;
        x2 = sum - b;
        x3 = sum - d;
    }
    else
    {
        x1 = sum - a;
        x2 = sum - b;
        x3 = sum - c;
    }
    cout << x1 << " " << x2 << " " << x3 << endl;
}

int main()
{
    solve();
    return 0;
}