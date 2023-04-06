#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)


void print_fun(int n, int m){
    for (int i = 1; i <=m ; i++) cout << " ";
    for (int i = 1; i <=n ; i++) cout << "*";
}

void solve(){
    int row; cin >> row;
    for (int i = 1; i <= row; i++){
        print_fun(i * 2 - 1, row - i);
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