class Solution {
private:
    string shared(string a, string b) {
        string newStr = ""; 
        for(int i = 0; i < min(a.size(), b.size()); i++) {
            if (a[i] == b[i]) newStr+=a[i];
            else break;  
        }
        return newStr;
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        string current;

        for(const auto& str : strs){
            if (str.empty()) return str;
            else if (current.empty()) current = str;
            else{
               string temp = shared(current, str);
               if(temp.empty()) return "";
               else if(temp.size() < current.size()) current = temp;
            } 
            
        }
        return current; 
    }
};