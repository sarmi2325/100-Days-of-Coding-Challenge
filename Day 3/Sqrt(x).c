int mySqrt(int x) {
    long int y=0;
    while(y*y<=x){
        y++;
    }
    return y-1;
}
