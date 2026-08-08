int strStr(char* haystack, char* needle) {
    int h_len = strlen(haystack);
    int n_len = strlen(needle);
    
    if (n_len > h_len) {
        return -1;
    }
    
    for (int i = 0; i <= h_len - n_len; i++) {
        if (strncmp(&haystack[i], needle, n_len) == 0) {
            return i;
        }
    }
    
    return -1;
}