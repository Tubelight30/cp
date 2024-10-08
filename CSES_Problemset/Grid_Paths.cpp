#include <bits/stdc++.h>
using namespace std;
#define int long long int
int ans = 0;
bool visited[7][7];
//! const string& s very very IMP
//! otherwise recursive func copy the entire string everytime------>  78ms reduced to 28ms
void solve(int r, int c, int moves,const string& s)
{
    if(visited[r][c] ==  true)return;
    
    if (r == 6 && c == 0)
    {
        if(moves == 48) ans++;
        return;
    }
    //! READ THE CP ALGO BOOOKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK
    //! complete search optimization from cp algo book
    //!optimization 3 and 4 used
    bool hitwall = (c>=1 && c<=5 &&r == 0&& !visited[r][c-1] && !visited[r][c+1]) //!up wall hit
    ||  (c>=1 && r == 6 && c<=5 && !visited[r][c-1] && !visited[r][c+1]) //!down wall hit
    ||  (r>=1 && c == 0 && r<=5 && !visited[r-1][c] && !visited[r+1][c]) //! left wall hit
    ||  (r>=1 && c == 6 && r<=5 && !visited[r-1][c] && !visited[r+1][c]) //! right wall hit
    
    //!this is optimization 4: general case of optimization 3
    || (c>=1 && c<=5 && r> 0 && r<6 && !visited[r][c-1] && !visited[r][c+1] && visited[r-1][c] && visited[r+1][c])//! hit up and left, right free
    || (c>=1 && c<=5 && r < 6 && r>0 && !visited[r][c-1] && !visited[r][c+1] && visited[r+1][c] && visited[r-1][c])//! hit down and left,right free
    ||  (r>=1 && c > 0 && c<6 && r<=5 && !visited[r-1][c] && !visited[r+1][c] && visited[r][c-1] && visited[r][c+1])//! hit left and up,down free
    ||  (r>=1 && c < 6 && c>0 && r<=5 && !visited[r-1][c] && !visited[r+1][c] && visited[r][c+1] && visited[r][c-1]);//! hit right and up,down free
 
    if(hitwall) return;
    
    visited[r][c] = true;
    if (r < 6 && visited[r + 1][c] == false && (s[moves] == '?' || s[moves] == 'D'))
    {
        solve(r + 1, c, moves + 1,s);
    } //! down
 
    if (r > 0 && visited[r - 1][c] == false && (s[moves] == '?' || s[moves] == 'U'))
    {
        solve(r - 1, c, moves + 1,s);
    } //! up
 
    if (c < 6 && visited[r][c + 1] == false && (s[moves] == '?' || s[moves] == 'R'))
    {
        solve(r, c + 1, moves + 1,s);
    } //! right
 
    if (c > 0 && visited[r][c - 1] == false && (s[moves] == '?' || s[moves] == 'L'))
 
    {
        solve(r, c - 1, moves + 1,s);
    } //! left
    visited[r][c] = false;
}
 
int32_t main()
{
    string s;
    cin >> s;
    solve(0, 0, 0,s);
    cout << ans << endl;
    return 0;
}