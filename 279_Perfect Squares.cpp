class Solution {
public:
    int numSquares(int n) {
        queue<int> q;
        unordered_set<int> s;
        if(n > 0){
            q.push(n);
        }
        int level = 0;
        while(!q.empty()){
            level++;
            int size = q.size();
            for(int i = 0; i < size; ++i){
                int val = q.front();
                q.pop();
                if(!s.insert(val).second)
                    continue;
                for(int j = 1; j <= sqrt(val); j++){
                   if(val - (j * j) == 0) 
                       return level;
                   q.push(val- (j * j));
               }
            }
        }
        return level;
    }
};
