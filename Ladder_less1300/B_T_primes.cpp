#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
void solve(vector<int> &sieve)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0;i<n;i++){
        int posi = lower_bound(sieve.begin(),sieve.end(),v[i])-sieve.begin();
        if(sieve[posi] == v[i]){
            cout<<"YES"<<endl;
            
        }else cout<<"NO"<<endl;
    }
}

int32_t main()
{
    vector<int> sieve;
    vector<bool> isPrime(1e6, 1);
    for (int i = 2; i < 1e6; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < 1e6; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < 1e6; i++)
    {
        if (isPrime[i])
        {
            sieve.push_back(i * i);
        }
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve(sieve);
    return 0;
}