class Solution {
public:
    struct less_than{
        bool operator() (const vector<int>& struct1, const vector<int>& struct2){
            return (struct1[0] < struct2[0]);
        }
    };

    
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        intervals.push_back(newInterval);
        if(intervals.size() <= 1)
            return intervals;
        sort(intervals.begin(), intervals.end(), less_than());
        vector<int> temp = intervals[0];
        vector<vector<int>> res;
        res.clear();
        for(int i = 1; i < intervals.size(); ++i){
            if(intervals[i][0] > temp[1]){
                res.push_back(temp);
                temp = intervals[i];
            }else if(intervals[i][1] > temp[1]){
                    temp[1] = intervals[i][1];
            }
        }
        
        if(res.size() == 0){
            res.push_back(temp);
            return res;
        }
        auto t = res[res.size() - 1];
        if(t[1] < temp[0]){
            res.push_back(temp);
        }
        return res;
    }
};
