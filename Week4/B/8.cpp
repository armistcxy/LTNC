#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

void solve(){
    vector<double> boy, girl;
    double a,b;
    while (cin >> a >> b){
        boy.push_back(a);
        girl.push_back(b);
    }
    sort(all(boy)), sort(all(girl));
    bool ok = true;
    for (int i = 0; i < boy.size() ; i++){
        if (boy[i] <= girl[i]){
            ok = false;
            break;
        }
    }

    cout << (ok ? "Yes" : "No");
    
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