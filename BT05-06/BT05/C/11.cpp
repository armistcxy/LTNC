void change_10_to_2(int n){
    int j = 0;
    string s = "";
    while((1<<j) <= n){
        if (n & (1<<j)) s += "1";
        else s += "0";
        j++;
    }
    cout << s;
}

void change_2_to_10(string s){
    int n = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '1') n += (1<<i);
    }
    cout << n;
}