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
    bool canAttendMeetings(vector<Interval>& intervals) {
        if(intervals.size() <= 1)
            return true;
        sort(intervals.begin(), intervals.end(), less_than());
        Interval temp = intervals[0];
        for(int i = 1; i < intervals.size(); ++i){
            if(temp.end > intervals[i].start)
                return false;
            temp = intervals[i];
        }
        return true;
    }
};
