class Solution {
public:
    bool isAnagram(string s, string t) {
      if (s.length() != t.length()) return false;

      unordered_map<char, int> counter;

      for(char c : s){
        if(counter.find(c) == counter.end()) counter[c] = 1;
        else counter[c]++;
      }

      for(char c : t){
        if(counter.find(c) == counter.end() || counter[c] == 0) return false;
        counter[c]--;
      }

      return true;
    }
};