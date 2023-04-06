#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

char* concat(const char* x, const char* y){
   int len1 = 0;
   while (x[len1] != '\0') len1++;
   int len2 = 0;
   while (y[len2] != '\0') len2++;
   char* res = new char[len1 + len2];
   for (int i = 0; i < len1; i++) res[i] = x[i];
   for (int i = len1; i < len1 + len2; i++) res[i] = y[i - len1];
   return res;
}
int main(){
    char x[] = "15"; char y[] = "18";
    char *test = concat(x,y);
    cout << test << '\n';
}