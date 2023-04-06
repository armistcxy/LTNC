#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)


int gcd(int a, int b){
    return (b == 0 ? a : gcd(b,a%b));
}
bool check_coprime(int a, int b){
    return (gcd(a,b) == 1);
}
void solve(){

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