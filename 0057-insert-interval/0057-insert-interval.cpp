class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        vector<int>prev=intervals[0];
        vector<vector<int>> merged;
        for(int i=1;i<intervals.size();i++){
            vector<int>interval=intervals[i];
            if(interval[0]<=prev[1]){
                prev[1]=max(prev[1],interval[1]);
            }
            else{
                merged.push_back(prev);
                prev=interval;
            }
        }
        merged.push_back(prev);
        return merged;
    }
};