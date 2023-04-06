double H(int N) { 
   if (N == 1) return 1.0;
   return H(N) + 1.0/N; 
}

// Với N khác 1 hàm sẽ lặp vĩnh viễn (lí do: không có điều chỉnh để N có thể về base case)
