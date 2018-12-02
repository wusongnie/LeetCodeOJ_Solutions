class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(string email : emails){
            string temp = "";
            bool after = false;
            for(int i = 0; i < email.size(); ++i){
                if(!after && email[i] == '.')
                    continue;
                else if(email[i] == '+'){
                    while(email[i] != '@')
                        ++i;
                    i -= 1;
                }else if(email[i] == '@'){
                    temp += email[i];
                    after = true;
                }else{
                    temp += email[i];
                }
                
            }
            s.insert(temp);
        }
        return s.size();
    }
};
