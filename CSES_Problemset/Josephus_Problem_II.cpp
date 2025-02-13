#include <bits/stdc++.h>
using namespace std;

//! Using policy based data structures. read about them online.
//! Ordered Set
//! other methods give tle
#include <ext/pb_ds/assoc_container.hpp> //
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
//! like vector<int> v;
//! rb_tree(red black tree) gives log(n) complexi for insertion or search or erase
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define int long long int
    void solve()
{
    int n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    ordered_set st;
    for (int i = 1; i <= n; i++)
    {
        st.insert(i);
    }
    int i = 0;
    //! we can access ele of this set like a vector
    while(!st.empty()){
        i = (i+k)%st.size();
        int val = *st.find_by_order(i);//here
        cout<<val<<" ";
        st.erase(st.find(val));

    }
    cout<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}