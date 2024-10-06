    #include <bits/stdc++.h>
    using namespace std;

    bool ok(string &s)
    {
        cout << "? " << s <<endl;
        cout.flush();
        int x;
        cin >> x;
        return x;
    }

    // 1100
    void solve()
    {
        bool flag = false;
        int n;
        cin >> n;
        string ans = "";
        int len = 0;
        for (int i = 0; i <= 2 * n; i++)
        {
            if (len == n)
            {
                cout << "! " << ans <<endl;
                cout.flush();
                break;
            }
            if (flag == false)
            {
                ans += "0";
                if (ok(ans))
                {
                    ++len;
                    continue;
                }
                ans.pop_back();
                ans += "1";
                if (ok(ans))
                {
                    ++len;
                    continue;
                }
                flag = true;
                ans.pop_back();


            }
            ans = "0" + ans;
            if (ok(ans))
            {
                ++len;
                continue;
            }
            // ans.pop_back();
            ans[0] = '1';
            ++len;
            // if (ok(ans))
            // {
            //     ++len;
            //     continue;
            // }
        }
    }

    int main()
    {
        int t = 0;
        cin >> t;
        while (t--)
        {
            solve();
        }

        return 0;
    }