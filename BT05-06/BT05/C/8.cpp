int get_near_1 (double x){
    double res = (abs(ceil(x) - x) <= abs(floor(x) - x) ? ceil(x) : floor(x));
    return (int)res; 
}

int get_near_2 (double x){
    double temp = x * 10;
    if ((int) temp % 10 >= 5) return (int)x + 1;
    else return (int)x;
}