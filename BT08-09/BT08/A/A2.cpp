#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)


int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

   char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   // b code
   int b[4] = {1,2,3,4};
   for (int i = 0; i <= 3; i++){
      cout << &b[i] << '\n';
   } 

   // c code
   double c[4] = {1.0,2.5,3.5,4.5};
   for (int i = 0; i <= 3; i++){
      cout << &c[i] << '\n';
   }
   
   // d code
   char d[4] = "abc"; 
   for (char *cp = d; (*cp) != '\0'; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;

/*
a, chương trình in ra 
0x3dbdbff834 : a
0x3dbdbff835 : b
0x3dbdbff836 : c
ta thấy đây là các vùng nhớ cạnh nhau, mỗi biến char chỉ cần 1 byte để lưu trữ
b, chương trình in ra
0x4ae39ff724
0x4ae39ff728
0x4ae39ff72c
0x4ae39ff730
ta thấy địa chỉ các phần tử liên tiếp cách nhau 4 byte, vậy biến kiểu int có kích thước là 4 byte
c, chương trình in ra
0xba8ebffc00
0xba8ebffc08
0xba8ebffc10
0xba8ebffc18
ta thấy địa chỉ các phần tử liên tiếp cách nhau 8 byte, vậy biến kiểu int có kích thước là 8 byte
d, nếu thay cp += 2 thì thay vì trỏ tới phần tử tiếp theo trong mảng thì nó trỏ tới phần tử cách phần tử hiện tại 2 index
đang trở từ i-th index -> (i + 2)-th index
*/
    
}

