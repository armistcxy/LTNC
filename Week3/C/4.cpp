#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)
int mx[8]={1,1,1,-1,-1,-1,0,0};
int my[8]={1,-1,0,1,-1,0,1,-1};
void solve(){
    int m,n; cin >> m >> n;
    string board[m];
    for (int i = 0; i < m; i++){
        cin >> board[i];
    }
    for (int i = 0; i < m ; i++){
        for (int j = 0; j < n; j++){
            if (board[i][j] == "*") {
                cout << "* ";
                continue;
            }
            int cnt = 0;
            for (int x = 0; x < 8 ; x++) for (int y = 0; y < 8; y++){
                int dx = i + mx[x], dy = j + my[y];
                if (dx < 0 || dx >= m || dy < 0 || dy >= n) continue;
                if (board[dx][dy] == "*") cnt++;
            }
            cout << cnt << ' ';
        }
        cout << '\n';
    }
}
int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("ouput.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--){
        solve();
    }
}