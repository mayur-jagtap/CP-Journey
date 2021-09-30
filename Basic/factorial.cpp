//iterative approach

int factorial(int n){
    long long int res = 1;
    while(n > 0){
        res *= n;
        n--;
    }
    return res;
}

int recursivefactorial(int n){
    if(n == 1){
        return 1;
    }
    return n * recursivefactorial(n-1);
}