class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> stack;
        int res = 0;
        for(string s:ops){
            if(s == "+"){
                int p1 = stack.top();
                stack.pop();
                int p2 = stack.top();
                stack.push(p1);
                stack.push(p1 + p2);
            }else if(s == "C"){
                stack.pop();
            }else if(s == "D"){
                stack.push(2 * stack.top());
            }else{
                stack.push(stoi(s));
            }
        }
        
        while(!stack.empty()){
            res += stack.top();
            stack.pop();
        }
        
        return res;
    }
};
