class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasStation=0;
        int costs=0;
        for(int i=0;i<gas.size();i++){
            gasStation=gasStation+gas[i];
        }
        for(int i=0;i<cost.size();i++){
            costs=costs+cost[i];
        }
        if(gasStation<costs) return -1;
        int total=0;
        int idx=0;
        for(int i=0;i<gas.size();i++){
            total=total+gas[i]-cost[i];
            if(total<0){
                idx=i+1;
                total=0;
            }
        }
        return idx;
    }
};