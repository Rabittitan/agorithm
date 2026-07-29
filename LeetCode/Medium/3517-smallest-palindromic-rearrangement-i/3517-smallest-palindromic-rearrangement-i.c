char* smallestPalindrome(char* s) {
    static char ans[100005]; 
    int cnt[26] = {0};

    int n = strlen(s);

    for (int i = 0; i < n; i++)
        cnt[s[i] - 'a']++;

    int idx = 0;

    for (int i = 0; i < 26; i++) {
        while (cnt[i] >= 2) {
            ans[idx++] = 'a' + i;
            cnt[i] -= 2;
        }
    }

    int leftLen = idx;

    for (int i = 0; i < 26; i++) {
        if (cnt[i]) {
            ans[idx++] = 'a' + i;
            break;
        }
    }

    for (int i = leftLen - 1; i >= 0; i--)
        ans[idx++] = ans[i];

    ans[idx] = '\0';

    return ans;
}
