class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        scores.reserve(operations.size());

        for(const auto& operation : operations){
            if (operation == "+")
               scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]); 
            else if (operation == "D")
                scores.push_back( 2 * scores.back());
            else if (operation == "C")
                scores.pop_back();
            else 
                scores.push_back(stoi(operation));
        }
        
        return accumulate(scores.begin(), scores.end(), 0);
    }
};