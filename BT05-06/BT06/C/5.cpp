vector<int> res;
void backtrack(int n, int prev){
   if (n < 0) return;
   if (n == 0){
      for (int v : res) cout << v << ' ';
      cout << '\n';
      return;
   }
   for (int i = prev; i >= 1; i--){
      res.push_back(i);
      backtrack(n-i,i);
      res.erase(res.end() - 1);
   }
}
void solve(){
   int n; cin >> n;
   backtrack(n,n);
}