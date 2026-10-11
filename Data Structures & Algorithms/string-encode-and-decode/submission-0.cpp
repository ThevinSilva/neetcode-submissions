class Solution {
public:

    string encode(vector<string>& strs) {
        string target;
        
        for(const auto &str : strs) 
            target+= to_string(str.size()) + "#" + str;

        cout << target;
            
        return target; 
    }

    vector<string> decode(string s) {
        vector<string> target;
        string length;
        string::iterator it = s.begin();

        while(it != s.end())
        {
            cout << length;
            if (*it == '#') {
                target.push_back(string(it + 1, it+=stoi(length) + 1));
                length = "";
            } else {
                length += *it;  
                it++;
            }
        }

        return target;
    }
};
