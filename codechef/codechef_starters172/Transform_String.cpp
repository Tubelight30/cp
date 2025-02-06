#include <bits/stdc++.h>
using namespace std;
#define int long long int

//!https://www.youtube.com/watch?v=_VL4e8knldU
//! removing a letter has A[i] has cost i. cost = index in current(modified string) NOT original string.
//! to find least cost we should remove unwanted letter from the left most

//!so we map letters of b to a(checking from right most side). then remove unwanted letters. 

void solve()
{
    string a, b;
    cin >> a;
    cin >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    int n = a.size();
    int m = b.size();

    int ptr = m-1;
    int ans = 0;
    for(int i = n-1;i>=0;i--){
        if(ptr>=0 && b[ptr] == a[i]){
            ptr--;
        }else{
            ans+= ptr+2;
        }
    }

    if(ptr >= 0){
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;

}

int32_t main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}