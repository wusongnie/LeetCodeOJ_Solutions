class Solution {
public:
    vector<string> v;
    vector<string> findStrobogrammatic(int n) {
        unordered_map<char, char> map;
        map['6'] = '9';
        map['9'] = '6';
        map['0'] = '0';
        map['1'] = '1';
        map['8'] = '8';
        if(n % 2 == 1){
            string t = "0";
            helper(map, 1, t, n);
            t = "1";
            helper(map, 1, t, n);
            t = "8";
            helper(map, 1, t, n);
        }
        if(n % 2 == 0){
            string t = "";
            helper(map, 0, t, n);
        }
        return v;
    }
    void helper(unordered_map<char, char>& map, int count, string& curr, int n){
        if(count == n){
            if(curr[0] == '0'){
                if(curr.size() == 1)
                    v.push_back(curr);
            }else
                v.push_back(curr);
            return;
        }
        for(auto i : map){
            curr = curr + i.second;
            curr = i.first + curr;
            helper(map, count + 2, curr, n);
            curr.pop_back();
            curr.erase(0,1);
        }
        return;
    }
};
