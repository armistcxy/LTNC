string s = "";
bool is_appear[26];
void rec(int n, int k, int prev){
   if (k == 0){
      cout << s <<'\n';
      return;
   }
   for (int i = 0; i < prev; i++){
      if (is_appear[i]) continue;
      s+=('a' + i);
      is_appear[i] = true;
      rec(n,k-1,i);
      is_appear[i] = false;
      s.erase(s.end() - 1);
   }
}
void solve(){
   int n,k; cin >> n >> k;
   rec(n,k,n);
}