class Solution {
public:
    bool canTransform(string start, string end) {
        string s, e;
        for (int i = 0; i < start.size(); i++) 
            if (start[i] != 'X')
                s = s + start[i];
        for (int i = 0; i < end.size(); i++) 
            if (end[i] != 'X')
                e = e + end[i];
        if (s != e) return false;
        int sl = 0, sr = 0, el = 0, er = 0;
        for (int i = 0; i < start.size(); i++) {
            if (start[i] == 'L') sl ++;
            if (start[i] == 'R') sr ++;
            if (end[i] == 'L') el ++;
            if (end[i] == 'R') er ++;
            if (er > sr || sl > el ) return false; 
        }
        return true;
    }
};
