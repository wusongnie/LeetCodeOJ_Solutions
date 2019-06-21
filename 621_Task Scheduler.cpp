class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> v = vector<int>(26, 0);
        for(char c : tasks){
            v[c - 'A']++;
        }
        sort(v.begin(), v.end());
        int max_val = v[25] - 1;
        int idle_slots = max_val * n;
        for(int i = 24; i >= 0; --i){
            idle_slots -= min(v[i], max_val);
        }
        
        if(idle_slots > 0)
            return idle_slots + tasks.size();
        
        
        return tasks.size();
        
    }
};
