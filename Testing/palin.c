int is_palin(int n){
    int rev = 0;
    int original = n;
    while(n >= 1){
        rev = rev*10 + (n%10);
        n /= 10;
    }
    if(rev == original){
        return 1;
    }
    else{
        return 0;
    }
}