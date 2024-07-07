int romanToInt(char* s) {
    int value[256]={0};
    value['I']=1;
    value['V']=5;
    value['X']=10;
    value['L']=50;
    value['C']=100;
    value['D']=500;
    value['M']=1000;
    
    int result=0;
    for(int i=0;s[i];i++){
        if(value[s[i]]<value[s[i+1]]){
             result-=value[s[i]];
        }
        else{
            result+=value[s[i]];
        }
    }
    return result;

}
