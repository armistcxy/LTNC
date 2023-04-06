int f(int n){
   if (n == 0) return 1;
   int a[10];
   return f(n-1);
}

// cho n = 25000 thì có hiện tượng tràn mảng