class Solution {
public:
    vector<int> findPermutation(string s) {
        stack<int> st;
        vector<int> res = vector<int>(s.size() + 1, 0);
        int j = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == 'D'){
                st.push(i + 1);
            }else{
                st.push(i + 1);
                while(!st.empty()){
                    int temp = st.top();
                    st.pop();
                    res[j++] = temp;
                }
            }
        }
        st.push(s.size() + 1);
        while(!st.empty()){
            int temp = st.top();
            res[j++] = temp;
            st.pop();
        }
        return res;
    }
};
