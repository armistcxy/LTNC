#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

void swap_pointers(char* &x, char* &y)
{
   char *tmp = x;
   x = y;
   y = tmp;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

   char **s; 
   char foo[] = "Hello World"; 
   char *ss = foo;
   s = &ss;
   printf("s is %s\n",*s); 
   
   printf("s[0] is %s\n",s[0]); 

   return 0;

}

