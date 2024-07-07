bool isPalindrome(int x) {
    int n=x;
    long long int sum=0;
    if(x>=0){
        while(n!=0){
            sum=(sum*10)+(n%10);
            n=n/10;
        }
        if(sum==x)
            return 1;
    }
    return 0;
}
