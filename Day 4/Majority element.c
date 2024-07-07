int majorityElement(int* nums, int numsSize) {
   int count=1,max=nums[0],ele;
  for(int i=1;i<numsSize;i++){
  
        if(nums[i]==max){
            count++;
        }
        else{
            count--;
        }
    
    if(count==0){
        max=nums[i];
        count=1;
    }
   
  }
  return max;
}
