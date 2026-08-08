int strStr(char* haystack, char* needle) {
     int k=0;
    int c=0;
    int h=0;
    for (int i=0;i<strlen(haystack);i++){
        if (haystack[i]==needle[k]){
            c=i;
            k++;
            if (k==strlen(needle)){
                h++;
                break;
            }
        }
        else if (haystack[i]!=needle[k]){
            i=i-k;
            c=0;
            k=0;
        }
    }
    if (h!=0){
        return c-strlen(needle)+1;

    }
    else if(h==0){
        return -1;
    }
    return 0;
}