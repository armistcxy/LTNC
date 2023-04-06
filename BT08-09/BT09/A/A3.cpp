#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

int main(){

   char* a = new char[10];
   char* c = a + 3;
   for (int i = 0; i < 9; i++) a[i] = 'a'; 
   a[9] = '\0';
   cerr <<"a: " << "-" << a << "-" << endl;
   cerr <<"c: " << "-" << c << "-" << endl;
   delete c; /* lỗi ở đây là giá trị toán hạng của toán tử delete phải là giá trị con trỏ thu 
   được từ biểu thức new array trước đó */
   cerr << "a after deleting c:" << "-" << a << "-" << endl; // không in ra được dòng này.

   return 0;
}