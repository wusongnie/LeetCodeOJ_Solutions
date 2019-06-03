class Solution {
public:
    int compress(vector<char>& chars) {
        int p1 = 1;
        int p2 = 0;
        char prev = chars[0];
        int c = 1;
        chars.push_back('/0');
        while(p1 < chars.size()){
            if(chars[p1] == prev){
                c++;
            }else{
                chars[p2++] = prev;
                if(c != 1){
                    vector<char> temp;
                    while(c != 0){
                        temp.push_back(c % 10);
                        c /= 10;
                    }
                    for(int i = temp.size() - 1; i >= 0; i--){
                        chars[p2++] = temp[i] + '0';
                    }
                }
                c = 1;
                prev = chars[p1];
            }
            p1++;
        }
        return p2;
    }
};
