double H(int N) { 
   if (N == 1) return 0.0;
   return H(N-1) + 1.0/N; 
}

// ở N = 5000 ta chưa thấy hiện tượng gì, nếu ta tăng N cao hơn vài lần thì sẽ gây ra
// hiện tượng tràn stack và output không hiện ra kết quả