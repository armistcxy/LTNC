#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

void solve(){
    int n; cin >> n;
    int a[n];
    map<int,bool> mp;
    bool check = false;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (mp[a[i]]) check = true;
        mp[a[i]] = true;
    }
    cout << (check ? "Yes" : "No");
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