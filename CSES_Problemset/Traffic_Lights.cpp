#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int x,n;
  cin>>x>>n;
  set<int> st;
  st.insert(0);
  st.insert(x);
  multiset<int> distances;
  distances.insert(x);
  for(int i =0;i<n;i++){
    int temp;
    cin>>temp;
    st.insert(temp);
    auto it = st.find(temp);
    int prevval = *prev(it);
    int nextval = *next(it);

    int dist = nextval - prevval;
    distances.erase(distances.find(dist));//remove the distance create by the original l to r
    distances.insert(*it-prevval);// add the distances l to temp and temp to r
    distances.insert(nextval-*it);
    cout<<(*distances.rbegin())<<" ";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}
