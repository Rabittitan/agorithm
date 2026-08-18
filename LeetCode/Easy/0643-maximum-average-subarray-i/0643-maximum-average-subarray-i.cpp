class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        long long cur_sum = 0;
        long long max_sum = 0;

        for(int i = 0; i < k; i++){
            max_sum += nums[i];
        }
    
        cur_sum = max_sum;

        for(int i = k; i < nums.size(); i++){

            cur_sum = cur_sum - nums[i-k] + nums[i];

            if(cur_sum > max_sum){
                max_sum = cur_sum;
            }

        }

        

        return (double)max_sum/k;
        
    }
};