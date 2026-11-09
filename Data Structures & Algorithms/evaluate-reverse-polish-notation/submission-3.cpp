class Solution {

private:
    stack<int> s;
    
    int pop() {
        int temp = s.top();
        s.pop();
        return temp;    
    }
    
public:
    int evalRPN(vector<string>& tokens) {
        map<string, int(*)(int,int)> ops;
        ops["+"] = [](int a, int b) { return a + b; };
        ops["-"] = [](int a, int b) { return b - a; };
        ops["*"] = [](int a, int b) { return a * b; };
        ops["/"] = [](int a, int b) { return b / a; };
        
        for(const auto& token : tokens){
            // operand 
            if ( token == "+" || token == "-" || token == "*" || token == "/"){
                s.push(ops[token](pop(),pop()));
            }
            // operator
            else{    
               s.push(stoi(token)); 
            }
        }

        return s.top();
    }
};
