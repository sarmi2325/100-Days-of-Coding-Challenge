int singleNumber(int* nums, int numsSize) {
    int c=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j] && nums[i]!='#'){
                nums[j]='#';
                c=1;
            }
        }
        if(c==1){
            nums[i]='#';
            c=0;
        }
    }
    int a;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!='#'){
            a=nums[i];
        }
    }
    return a;
}
