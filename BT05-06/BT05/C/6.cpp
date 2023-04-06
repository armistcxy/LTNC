int gcd(int a, int b){
    return (b == 0 ? a : gcd(b,a%b));
}
bool check_coprime(int a, int b){
    return (gcd(a,b) == 1);
}