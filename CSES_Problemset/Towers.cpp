#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int towers = 0;
    //! longest non decreasing subsequence 
    
    for (int i = 0; i < n; i++)
    {   
        int temp;
        cin >> temp;
        int posi = upper_bound(v.begin(),v.end(),temp)-v.begin();
        //upper_bound function does binary search so O(log n)
        //posi has the index temp can be inserted at
        //if posi == v.size() means largest element So new tower
        //else put on top of old tower.
        if(posi==v.size()){
            v.push_back(temp);
        }
        else{
            v[posi] = temp;
        }
    } 
    // for(auto i: v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    cout<<v.size()<<endl;
}

int32_t main()
{
    solve();
    return 0;
}