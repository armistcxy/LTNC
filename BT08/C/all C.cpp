#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)
// write this instead of using strlen
int get_string_length(char a[]){
   int len = 0;
   while (a[len] != '\0') len++;
   return len;
}
void swap_char(char& a, char& b){
   char tmp = a;
   a = b;
   b = tmp;
}
char* append_c_string(char a[], char b[]){
   
   int len1 = get_string_length(a), len2 = get_string_length(b);
   char* tmp;
   for (int i = 0; i < len1; i++) tmp[i] = a[i];
   for (int i= len1; i < len1 + len2; i++) tmp[i] = b[i - len1];
   return tmp;
}

// a
void reverse(char a[]){
   int len = get_string_length(a);
   for (int i = 0; i < len / 2; i++){
      swap_char(a[i], a[len - i - 1]);
   }   
}

// b
void delete_char(char a[], char c){
   int len = get_string_length(a);
   int cnt = 0;
   for (int i = 0; i < len; i++){
      if (a[i] == c){
         cnt++;
      } 
   }
   int id = 0;
   char b[len - cnt];
   int cur = 0;
   while (id < len - cnt){
      if (a[id + cur] == c){
         cur++;
      }
      b[id] = a[id + cur];
      id++;
   }
   
   for (int i = 0; i < len; i++){
      a[i] = b[i];
   }
   a[len] = '\0';
}

//c
void pad_right(char a[], int n){
   int len = get_string_length(a);
   if (len >= n) return;

   int need = n - len;
   for (int i = len; i < n; i++){
      a[i] = ' ';
   }
   a[n] = '\0';
}

// d
void pad_left(char a[], int n){
   int len = get_string_length(a);
   if (len >= n) return;

   int need = n - len;
   for (int i = need; i < n; i++){
      a[i] = a[i - need];
   }
   for (int i = 0; i < need; i++){
      a[i] = ' ';
   }
   a[n] = '\0';
}

// e
void truncate(char a[], int n){
   int len = get_string_length(a);
   if (len <= n) return;

   a[n] = '\0';
}

// f
bool is_palindrome(char a[]){
   int len = get_string_length(a);
   for (int i = 0; i < len / 2; i++){
      if (a[i] != a[len - i - 1]) return false;
   }
   return true;
}

// g
void trim_left(char a[]){
   int len = get_string_length(a);
   int cnt = 0;
   while (a[cnt] == ' '){
      cnt++;
   }
   for (int i = cnt; i < len; i++){
      a[i - cnt] = a[i];
   }
   a[len - cnt] = '\0';
}

// h
void trim_right(char a[]){
   int len = get_string_length(a);
   int i = len;
   while (a[i -1] == ' ') i--;
   a[i] = '\0';
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


   char foo[] = "Hi guys";
   char tmp[] = "Hi guys";
   reverse(foo);
   cout << foo << '\n';

   delete_char(foo, 'g');
   cout << foo << '\n';

   pad_right(foo, 9);
   cout << foo << '\n';

   pad_left(foo, 14);
   cout << foo << '\n';

   truncate(foo,8);
   cout << foo << '\n';

   trim_left(foo);
   cout << foo << '\n';

   pad_right(foo, 8);

   trim_right(foo);
   cout << foo << '\n';
   return 0;

}

