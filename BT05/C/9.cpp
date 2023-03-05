int random_num(int n){
    return rand() % n;
}
void solve(){
    int n; cin >> n;
    cout << random_num(n);
}