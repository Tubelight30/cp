#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s = "aada";
    cin >> s;
    vector<int> v(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        v[s[i] - 'a']++;
    }
    char c;
    auto it = find(v.begin(), v.end(), 0);
    if (it != v.end())
    {
        int index = distance(v.begin(), it);
        int val = 'a' + index;
        c = (char)val;
    }
    if (s.length() == 1)
    {
        cout << s + c << endl;
        return;
    }
    else
    {
        int left = 0;
        int right = left + 1;
        while (right < s.length())
        {
            if (s[left] == s[right])
            {
                // cout<<"left "<<s.substr(0,left+1)<<endl;
                string newstr;
                newstr = s.substr(0, left + 1) + c + s.substr(right, s.length());
                cout << newstr << endl;
                return;
            }
            left++;
            right++;
        }
         left = 0;
        if (s[left] != c)
        {
            string newstr;
            newstr = c + s.substr(0, s.length());
            cout << newstr << endl;
            return;
        }
        else
        {
            string newstr;
            newstr = s.substr(0, s.length()) + c;
            cout << newstr << endl;
            return;
        }
    }
}

int main()
{
    // solve();
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}