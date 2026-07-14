class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int> sorted = arr;

        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> rank;

        int cur_r = 1;
        for (int i = 0; i < arr.size(); i++)
        {
            if((rank.find(sorted[i])) == rank.end() ){
                rank[sorted[i]] = cur_r;
                cur_r++;
            }
        }
        
        vector<int> answer;

        for (int i = 0; i < arr.size(); i++)
        {
            answer.push_back(rank[arr[i]]);
        }
        
        return answer;

    }
};