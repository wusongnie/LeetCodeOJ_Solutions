class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); ++i){
            if(st.empty() && !(s[i] == '[' || s[i] == '{' ||s[i] == '('))
                return false;
            
            if(s[i] == '[' || s[i] == '{' ||s[i] == '('){
                st.push(s[i]);
                continue;
            }  
            char t = st.top();
            
            switch(t){
                case '(':
                    if(s[i] != ')')
                        return false;
                    else
                        st.pop();
                    break;
                case '[':
                    if(s[i] != ']')
                        return false;
                    else
                        st.pop();
                    break;
                case '{':
                    if(s[i] != '}')
                        return false;
                    else
                        st.pop();
                    break;
            }
            
            
        }
        return st.size() == 0;
    }
};
