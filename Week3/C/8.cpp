#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

void solve(){
    int n; cin >> n;
    int t[n];
    for (int i = 0; i < n; i++) cin >> t[i];
    sort(t,t+n);
    long long total_wait = 0;
    for (int i = 0; i < n; i++) total_wait = (n-i-1) * t[i];   
    cout << total_wait;
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