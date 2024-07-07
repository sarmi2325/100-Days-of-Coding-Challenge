int searchInsert(int* a, int numsSize, int target) {
    for(int i=0;i<numsSize;i++){
        if(a[i]==target){
            return i;
        }
    }
    for(int i=1;i<numsSize;i++){
        if(target<a[i] && a[i-1]<target){
            return i;
        }
    }
    if(a[numsSize-1]<target){
        return numsSize;
    }
    return 0;
}
