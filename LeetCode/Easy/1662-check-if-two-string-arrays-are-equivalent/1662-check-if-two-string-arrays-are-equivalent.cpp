class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int  i = 0, j = 0, k = 0, l = 0;   

        while (i < word1.size() && k < word2.size()){
           if(word1[i][j] != word2[k][l] ){
             return false;
           }

            l++;
            j++;

           if(j == word1[i].size()){
            i++;
            j = 0;
           }

            if(l == word2[k].size()){
                k++;
                l = 0;
            }
        }
        return i == word1.size() && k == word2.size();
    }
};