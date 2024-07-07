bool isPalindrome(char* s) {
   int len=strlen(s),j=0,c=0;
    char str[300000];
    for(int i=0;i<len;i++){
        if((s[i]>='A' && s[i]<='Z')  ||( s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')){
            str[j++]=tolower(s[i]);
        }
    
    }
    if(j==1){
        return 1;
    }
    int len2=strlen(str);
    for(int i=0;i<j;i++){
        if(str[i]==str[j-i-1]){
            c=1;
        }
        else{
            c=0;
            return 0;
        }
    }
    return 1;
    
}
