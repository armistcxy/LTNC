double H(int N) { 
   return H(N-1) + 1.0/N; 
}

// lỗi: thiếu base case nên hàm lặp vô hạn, tràn stack (fix: thêm base case để hàm dừng khi gặp
// điều kiện dừng)