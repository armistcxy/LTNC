#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)
const int N = 1000;
bool col[N];
bool diag1[2*N], diag2[2*N];
char board[N][N];
bool ok;
void init(){
    ok = false;
    memset(col, false, sizeof col);
    memset(diag1, false, sizeof diag1);
    memset(diag2, false, sizeof diag2);
    for (int i = 1; i < N; i++) 
        for (int j = 1; j < N; j++)
            board[i][j] = '.';

}
void backtrack(int r, int n){
    if (ok) return;
    if (r > n){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                cout << board[i][j] << ' ';
            }
            if (i < n) cout << '\n';
        }
        ok = true;
        return;
    }
    for (int i = 1; i <= n; i++){
        if (col[i] || diag1[i-r+n] || diag2[i+r]) continue;

        col[i] = true;
        diag1[i-r+n] = true;
        diag2[i+r] = true;

        board[r][i] = '*';

        backtrack(r+1,n);

        col[i] = false;
        diag1[i-r+n] = false;
        diag2[i+r] = false;

        board[r][i] = '.';
    }
}
void solve(){
    init();
    int n; cin >> n;
    backtrack(1,n);
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("ouput.txt","w",stdout);
#endif
    int t = 1;
    while (t--){
        solve();
    }
}