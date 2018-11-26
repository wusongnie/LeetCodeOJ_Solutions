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
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.size() <= 0)
            return 0;
        int res = 0;
        vector<int> starts;
        vector<int> ends;
        for(int i = 0; i < intervals.size(); ++i){
            starts.push_back(intervals[i].start);
            ends.push_back(intervals[i].end);
        }
        
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());
        int endPoint = 0;
        for(int i = 0; i < intervals.size(); ++i){
            if(starts[i] < ends[endPoint]){
                res++;
            }else{
                endPoint++;
            }
        }
        return res;
    }
};
