class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1 ,  r = *max_element(piles.begin(),piles.end());
        int ans = r;
        

        while(l <= r){
            int mid = l +(r - l)/2;
            long long count= 0;

            for(int i = 0 ; i < piles.size(); i++){
                count += (piles[i] + (mid - 1) )/mid;      
            }

            if(count <= h){
                ans = mid;
                r = mid - 1;

            }else{
                l = mid + 1;
            }
        }

        return ans;
    }
};