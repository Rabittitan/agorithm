class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, window;

        // TODO 1: build need
        

        int left = 0;
        int formed = 0;
        int required = need.size();

        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            // TODO 2: update window
            

            // TODO 3: nếu vừa đủ thì formed++
            

            // TODO 4: shrink bằng WHILE
            while (/* formed == required */) {

                // TODO 5: update answer
                

                char d = s[left];

                // TODO 6: remove khỏi window
                

                // TODO 7: nếu không đủ nữa thì formed--
                

                left++;
            }
        }

        // TODO 8: return result
        return minLen;
    }
};