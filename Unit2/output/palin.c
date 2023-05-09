int ispalindrome(int n){
    int x = n;
    int reverse = 0;
    while(x > 0){
        reverse = (10*reverse) + (x%10);
        x /= 10;
    }
    return reverse == n;
}