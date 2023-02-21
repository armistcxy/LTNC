#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)
 
void solve(){
    int n; cin >> n;
    int x = 0;
    pair<int,int> a[n+1];
    rep(i,1,n){
        cin >> a[i].first ;
        a[i].second = i;
    }   
    sort(a+1,a+1+n);
    rep(i,1,n){
        int temp =x-a[i].first;
        int l=i+1,r=n;
        while (l<r){
            if (a[l].first + a[r].first == temp){
                cout << a[i].second << ' ' << a[l].second << ' ' << a[r].second << '\n';
                return;
            }
            else if (a[l].first + a[r].first > temp) r--;
            else l++;
        }
    }
    cout << "IMPOSSIBLE\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1; 
    while (t--){
        solve();
    }
}