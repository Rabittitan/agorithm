// int romanToInt(char* s) {
//     int value[256] = {0};
//     value['I'] = 1;
//     value['V'] = 5;
//     value['X'] = 10;
//     value['L'] = 50;
//     value['C'] = 100;
//     value['D'] = 500;
//     value['M'] = 1000;

//     int ans = 0;

//     for (int i = 0; s[i] != '\0'; i++) {
//         if (s[i + 1] != '\0' && value[s[i]] < value[s[i + 1]])
//             ans -= value[s[i]];
//         else
//             ans += value[s[i]];
//     }

//     return ans;
// }

int value(char c)
{
    switch(c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
int romanToInt(char* s)
{
    int sum = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        int curr = value(s[i]);
        int next = value(s[i + 1]);
        if(curr < next)
            sum -= curr;
        else
            sum += curr;
    }
    return sum;
}