class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newString;
        int length = min(word1.size(), word2.size());    


        for(int i = 0; i < length; i++) newString+=string() + word1[i] + word2[i];
        
        newString+= word1.size() == length ? word2.substr(length) : word1.substr(length);
        return newString;
    }
};