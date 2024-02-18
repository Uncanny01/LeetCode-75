class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string finalStr = "";
        int maxi = max(word1.length(), word2.length());
        for(int i=0; i<maxi; i++)
        {
            if(i<word1.length())
            {
                finalStr+=word1[i];
            }
            if(i<word2.length())
            {
                finalStr+=word2[i];
            }
        }
        return finalStr;
    }
};