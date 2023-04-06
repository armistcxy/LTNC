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

   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(s1,s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   
   return 0;
/* giải thích: vì ban đầu hàm swap_pointers là truyền tham trị nên không thể thay đổi được 
giá trị của 2 con trỏ, ta cần sửa thành truyền tham chiếu để có thể sửa được.
*/ 
}

