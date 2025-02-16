#include <bits/stdc++.h>
using namespace std;
// #define int long long int
#include <ext/pb_ds/assoc_container.hpp> //
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
template <typename T>
using ordered_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
struct range{
    int r,l,idx;

    bool operator<(const range &other){

        if(l == other.l){
            return r>other.r;
        }
        return l<other.l;
    }
};

void solve(){
    int n;
    cin >> n;
    vector<int> contained(n, 0);
    vector<int> contains(n, 0);
    vector<range> ranges(n);
    for(int i = 0;i<n;i++){
        cin>>ranges[i].l>>ranges[i].r;
        ranges[i].idx = i;
    }
    sort(ranges.begin(),ranges.end());
    //as the r values or l values of two different ranges can match
    //we use pair<int,int> trick while storing it in pair.
    ordered_set<pair<int,int>> st;

    for(int i = 0;i<n;i++){
        st.insert({ranges[i].r,-1*i});
        contained[ranges[i].idx] = st.size() - st.order_of_key({ranges[i].r,-1*i}) -1;
    }
    st.clear();

    for(int i = n-1;i>=0;i--){
        st.insert({ranges[i].r,-1*i});
        contains[ranges[i].idx] = st.order_of_key({ranges[i].r,-1*i});
    }
    for(auto i: contains){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i: contained){
        cout<<i<<" ";
    }
    cout<<endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}