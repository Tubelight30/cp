#include <bits/stdc++.h>
using namespace std;


// bool comp(int a,int b){
//     if(a<=b) return true;
//     else if(a>b){
//         // swaps = max(swaps,a+b);
//         cout<<a+b<<endl;
//         return false;
//     }
// }

void solve(){
//   int swaps = 0;
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  vector<int> temp(v.begin(),v.end());
//   unordered_map<int,int> mp;
//   for(int i = 0;i<n;i++){
//     mp[v[i]] = i;
//   }

  sort(temp.begin(),temp.end());
// //   for(auto ele: temp){
// //     cout<<ele<<" ";
// //   }
    bool flag = true;
    int pos = n-1;
    int cost = 0;
    // cout<<temp[n-1-pos]<<endl;
    while(flag){
        for(int i = 0;i<n;i++){

            if(temp[i] != v[i]) break;
            else{
                if(i == n-1){
                    flag = false;
                    break;
                }
            }
        }
        if(v[pos] != temp[pos]){
            cost = max(temp[0]+ v[pos],temp[0] + temp[pos]);
            break; 
        }
        pos--;
    }
    cout<<cost<<endl;
//   for(int i = 0;i<n/2;i++){
//     int maxi = temp[n-i-1];
//     int mini = temp[i];
//     if(mp[maxi]<mp[mini]) {
//         // cout<<mp[maxi]<<" "<<mp[mini]<<" ";
//         swaps = maxi+mini;
//     }
//   }
//   cout<<swaps<<endl;

    // int K = 0;
    // vector<int> min_suffix(n + 1, INT_MAX);
    
    // for (int i = n - 1; i >= 0; i--) {
    //     min_suffix[i] = min(min_suffix[i + 1], v[i]);
    // }
    
    // for (int i = 0; i < n; i++) {
    //     if (v[i] != i + 1) { 
    //         K = max(K, v[i] + min_suffix[i + 1]);
    //     }
    // }
    
    // cout<<K<<endl;

    // int max_misplaced = 0;
    // int min_elemet = *min_element(v.begin(), v.end());
    
    // for (int i = 0; i < n; i++) {
    //     if (v[i] != i + 1) {  // If element is not in its correct position
    //         max_misplaced = max(max_misplaced, v[i]);
    //     }
    // }
    
    // cout<<max_misplaced + min_elemet<<endl;

}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}