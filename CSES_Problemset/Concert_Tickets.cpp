#include <bits/stdc++.h>
using namespace std;
#define int long long int
// int binsearch(vector<int> &t, int k)
// {
//     int low = 0;
//     int high = t.size() - 1;
//     int ans = -1;
//     while (low <= high)
//     {

//         int mid = (low + high) / 2;
//         if (t[mid] <= k)
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     return ans;
// }
void solve()
{
    int n;
    int m;
    cin >> n >> m;
    // vector<int> cust(m);

    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        st.insert(temp);
    }

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        auto it = st.upper_bound(temp);//! iterator pointing to the immediate next element which is just greater than temp(defn of upperbound)
        //! upper bound has log(n) complexity
        
        if(it != st.begin()){
            it--;
            cout<<*it<<endl;
            st.erase(it);
            continue;
        }
        cout << -1 << endl;
    }
}

int32_t main()
{
    solve();
    return 0;
}