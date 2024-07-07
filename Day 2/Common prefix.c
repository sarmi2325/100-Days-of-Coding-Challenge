char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize==0){
        return "";
    }
    char *prefix=(char*)malloc(strlen(strs[0])+1*sizeof(char));
    strcpy(prefix,strs[0]);
    for(int i=1;i<strsSize;i++){
        char *temp=(char*)malloc(strlen(prefix)+1*sizeof(char));
        int j=0;
        while(strs[i][j]&&prefix[j]&&strs[i][j]==prefix[j]){
            temp[j]=prefix[j];
            j++;
        }
        temp[j]='\0';
        strcpy(prefix,temp);
        free(temp);
    }
    return prefix;
}
