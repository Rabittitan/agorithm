/**
 * Note: The returned array must be malloced, assume caller calls free().
*/
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    
    *returnSize = pricesSize;
    int* answer = (int*)malloc(pricesSize * sizeof(int));
    for (int i = 0; i < pricesSize; i++) {
        answer[i] = prices[i];
    }

    int* stack = (int*)malloc(pricesSize * sizeof(int));
    int top = -1;

    for (int i = 0; i < pricesSize; ++i) {
        while (top >= 0 && prices[stack[top]] >= prices[i]) {
            answer[stack[top]] -= prices[i];
            top--;
        }
        stack[++top] = i;
    }

    free(stack);
    return answer;
}