#include <bits/stdc++.h>
using namespace std;
#define int long long int


bool isSafe(int row,int col,vector<string> &board,int n){
    int dupcol = col;
    int duprow = row;

    while (dupcol>=0 && duprow>=0)
    {
        if(board[duprow][dupcol] == 'Q') return false;
        dupcol--;
        duprow--;
    }
    dupcol = col;
    duprow = row;

    for(int i = 0;i<=col;i++){
        if(board[duprow][i] == 'Q') return false;
    }

    while(duprow<n && dupcol>=0){
        if(board[duprow][dupcol] == 'Q') return false;
        dupcol--;
        duprow++;
    }
    return true;
    
}
int ans = 0;
void placeQ(int col,vector<string> &board,int n){
    if(col == n){
        ans++;
        return;
    }
    for(int row  =0;row<n;row++){
        if(isSafe(row,col,board,n) && board[row][col] != '*'){
            board[row][col] = 'Q';
            placeQ(col+1,board,n);
            board[row][col] = '.';
        }
    }
}
void solve(){
  vector<string> board;
  string s;
  for(int i = 0;i<8;i++){
    cin>>s;
    board.push_back(s);
  }
  placeQ(0,board,8);
  cout<<ans<<endl;
}

int32_t main(){
        solve();
    return 0;
}