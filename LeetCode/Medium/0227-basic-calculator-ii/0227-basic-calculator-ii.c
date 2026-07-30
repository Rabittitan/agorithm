int calculate(char* s) {
    int n = 0;
    while (s[n] != '\0') n++;

    int *stack = (int *)malloc(sizeof(int) * (n + 1));
    int top = -1;

    long num = 0;
    char op = '+';

    for (int i = 0; i <= n; i++) {
        char c = s[i];

        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        }

        if ((!isdigit(c) && c != ' ') || c == '\0') {
            if (op == '+') {
                stack[++top] = (int)num;
            } else if (op == '-') {
                stack[++top] = -(int)num;
            } else if (op == '*') {
                stack[top] = stack[top] * (int)num;
            } else if (op == '/') {
                stack[top] = stack[top] / (int)num;
            }

            op = c;
            num = 0;
        }
    }

    int ans = 0;
    while (top >= 0) {
        ans += stack[top--];
    }

    free(stack);
    return ans;
}