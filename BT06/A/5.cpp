long f(int n){
   long x = 1, pre_x = 1, temp = 1;
   int id = 1;
   while (id <= n){
      id++;
      temp = pre_x;
      pre_x = x;
      x = x + temp;
   }
   return x;
}

// dùng đệ quy tính toán lâu hơn vì có những phần tính toán
// lặp lại