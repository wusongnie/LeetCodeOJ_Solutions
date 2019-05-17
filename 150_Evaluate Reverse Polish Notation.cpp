class Solution {
public:
    stack<int> s;
    int first = 0;
    int second = 0;
    int result = 0;

    void add_two(){
        first = s.top();
        s.pop();
        second = s.top();
        s.pop();
        result = first + second;
        s.push(result);
    }

    void minus_two(){
        first = s.top();
        s.pop();
        second = s.top();
        s.pop();
        result = second - first;
        s.push(result);
    }

    void times_two(){
        first = s.top();
        s.pop();
        second = s.top();
        s.pop();
        result = first * second;
        s.push(result);
    }

    void divide_two(){
        first = s.top();
        s.pop();
        second = s.top();
        s.pop();
        result = second / first;
        s.push(result);
        
    }

    int evalRPN(vector<string>& tokens) {
        for(auto& in : tokens){
            if(in == "+"){
                add_two();
            }else if(in == "-"){
                minus_two();
            }else if(in == "*"){
                times_two();
            }else if(in == "/"){
                divide_two();
            }
            else{
                s.push(stoi(in.c_str()));
            }
        }
        return s.top();
    }
};
