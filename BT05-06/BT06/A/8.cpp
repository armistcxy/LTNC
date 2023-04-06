void solve(){
   int n; cin >> n;
   for (int i = 0; i < (1<<n); i++){
      for (int j = 0; j < n; j++)
         if ((1<<j) & i) cout << j + 1 << ' ';
      cout << '\n';
   }
}