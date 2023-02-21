#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

void solve(){
    int n; cin >> n;
    vector<bool> is_prime(n+1,true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++){
        if (is_prime[i]){
            primes.push_back(i);
            for (int j = i * i ; j <= n; j+=i) is_prime[j] = false;
        }
    }
    for (auto v : primes) cout << v << ' ';
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