void solve(){
   string s; cin >> s;
   do{
      cout << s << '\n';
   }while(next_permutation(s.begin(),s.end()));
}