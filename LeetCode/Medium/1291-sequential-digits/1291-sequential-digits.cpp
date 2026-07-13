class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        int lenLow = 0, lenHigh = 0;

        for (int x = low; x; x /= 10){
            lenLow++;
        }

        for (int x = high; x; x /= 10){
         lenHigh++;
        }

        for (int len = lenLow; len <= lenHigh; len++)
        {
            for (int start = 1; start + len - 1 <= 9; start++)
            {
                int num = 0;

                for (int d = start; d < start + len; d++)
                {
                    num = num * 10 + d;
                }

                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }
        return ans;
    }
};