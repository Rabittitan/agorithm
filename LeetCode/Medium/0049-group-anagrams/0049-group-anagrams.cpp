class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_map;
        
        for (const string& s : strs){
            string sorted_str = s;
            sort(sorted_str.begin(), sorted_str.end());
            anagram_map[sorted_str].push_back(s);
        }
       
        vector<vector<string>> result;
        
        for (auto& pair : anagram_map){
            result.push_back(move(pair.second));
        }
        
        return result;
    }
};