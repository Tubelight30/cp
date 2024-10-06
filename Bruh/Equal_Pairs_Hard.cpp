#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    
    int x,y;
    int zero_count = n;
    unordered_map<int,int> mp;
    int max_freq = 0;
    int freqele;
    int ans = 0;
    for(int i = 0;i<n;i++){
        cin>>x>>y;
        if (arr[x-1] == 0) {
            zero_count--;
        } else {
            ans -= (mp[arr[x-1]]*(mp[arr[x-1]]-1))/2;
            mp[arr[x-1]]--;
            ans += (mp[arr[x-1]]*(mp[arr[x-1]]-1))/2;
        }
        arr[x-1] = y;
        // if(mp[y]!=0){

        ans -= (mp[y]*(mp[y]-1))/2;
        // }
        mp[y]++;
        ans += (mp[y]*(mp[y]-1))/2;
       max_freq = max(max_freq, mp[y]);
        // int max_freq = 0;
        // for (const auto p : mp) {
        //     if (p.first != 0) {
        //         if(p.second>max_freq){
        //             max_freq = p.second;
        //             freqele = p.first;
        //         }
        //         // max_freq = max(max_freq, p.second);
        //     }
        // }
        // int ans = 0;
        // for (auto p : mp) {
        //     if (p.first != 0) {
        //         ans += (p.second * (p.second - 1)) / 2;
        //     }
        // }
        int res = 0;
        if(zero_count>0){
             res = ans+ zero_count*max_freq + (zero_count*(zero_count-1))/2;
        }
        else{
             res = ans;
        }
        // int res = ans+ zero_count*max_freq + (zero_count*(zero_count-1))/2;

        // int ans = 0;
        // for(int i = 0;i<n;i++){
        //     for(int j = 0;j<n;j++){
        //         if(i<j){
        //             if(arr[i] != 0 && arr[j] != 0 && arr[i] == arr[j]){
        //                 ans++;

        //             }else if((arr[j] == 0 || arr[i] == 0) && (arr[i] == freqele || arr[j] == freqele)){
        //                 ans++;
        //             }
        //         }
        //     }
        // }
        cout<<res<<" ";
    }
    cout<<endl;
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}