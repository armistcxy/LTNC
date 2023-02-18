#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

const ll INF = 1e16 + 5;
void solve(){
    int n; cin >> n;
    unsigned long long mx = INF, my = INF;
    while (n--)
    {
        unsigned long long a, b; cin >> a >> b;
        mx = min(mx,a), my = min(my,b);
    }
    cout << mx * my << '\n';
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