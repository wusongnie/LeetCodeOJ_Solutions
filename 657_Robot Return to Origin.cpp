class Solution {
public:
    bool judgeCircle(string moves) {
        int l = 0;
        int u = 0;
        for(char& c : moves){
            switch(c){
                case 'U':
                    u++;
                    break;
                case 'D':
                    u--;
                    break;
                case 'L':
                    l++;
                    break;
                case 'R':
                    l--;
                    break;       
            }
        }
        return l == 0 && u == 0;
    }
};
