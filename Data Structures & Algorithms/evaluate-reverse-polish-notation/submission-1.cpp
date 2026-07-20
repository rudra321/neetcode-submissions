class Solution {
public:
    bool op(string s){
        if(s == "+" || s == "-" || s == "*" || s == "/") return true;
        return false;
    }
    int operate(string op, int a, int b){
        if(op == "+") return a+b;
        if(op == "*") return a * b;
        if(op == "/") return a / b;
        if(op == "-") return a - b;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0; i<tokens.size(); i++){
            if(!op(tokens[i]))s.push(stoi(tokens[i]));
            else{
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                int result = operate(tokens[i], b, a);
                s.push(result);
            }
        }
        return s.top();
    }
};

