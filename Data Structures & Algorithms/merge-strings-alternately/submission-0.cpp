class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        int i = 0, j = 0;
        string res = "";

        while(i < m && j < n){
            res += word1[i++];
            res += word2[j++];
        }

        res += word1.substr(i);
        res += word2.substr(j);

        return res;
    }
};