#include <bits/stdc++.h>
using namespace std;
#define int long long int
int binsearch(vector<int> &b,int val1,int val2){
    int low = 0;
    int high = b.size()-1;
    int ans = b[low]-val1;
    while(low<=high){
        int mid = (high+low)/2;
        if(val2 <=  b[mid]-val1){
            ans = b[mid]-val1;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(),b.end());

    if (a.size() == 1)
    {
        cout << "YES" << endl;
        return;
    }

    a[0] = min(a[0],b[0]-a[0]);
    for(int i  =1;i<n;i++){
        int val = a[i];
        int bin = binsearch(b,a[i],a[i-1]);
        a[i] = min(bin,val);
        if(a[i]<a[i-1]){
            a[i] = max(val,bin);
            if(a[i]<a[i-1]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    
    cout<<"YES"<<endl;
    return;
}

int32_t main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}