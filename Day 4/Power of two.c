bool isPowerOfTwo(int n) {
    long long int i=0;
    if(n<=0){
        return 0;
    }
    
    while(n%2==0){
        n/=2;
    }
    return n==1;
}
