/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    struct less_than{
        bool operator() (const Interval& struct1, const Interval& struct2){
            return (struct1.start < struct2.start);
        }
    };

    vector<Interval> merge(vector<Interval>& intervals) {
        if(intervals.size() <= 1) return intervals;
        vector<Interval> res;
        sort(intervals.begin(), intervals.end(), less_than());
        intervals.push_back(Interval(INT_MAX,INT_MAX));
        Interval temp = intervals[0];
        for(int i = 1; i < intervals.size(); ++i){
            if(intervals[i].start > temp.end){
                res.push_back(temp);
                temp = intervals[i];
            }else{
                if(intervals[i].end > temp.end)
                    temp.end = intervals[i].end;
            }
        }
        return res;
    }
};
