class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heights_t = heights;
        sort(heights_t.begin(),heights_t.end());

        int count = 0;

        for(int i = 0; i < heights.size(); i++){
            if(heights_t[i] != heights[i] ){
                count++ ;
            }
        }

        return count;
    }
};