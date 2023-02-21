#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

void solve(){
    int n; cin >> n;
    int p[n+1]; // prefix sum
    p[0] = 0;
    int a[n+1];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        p[i] = p[i-1] + a[i];
    }
    bool ok = (n==1);
    for (int i = 1; i <= n; i++){
        if (p[i-1] == p[n] - p[i]){
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--){
        solve();
    }
}