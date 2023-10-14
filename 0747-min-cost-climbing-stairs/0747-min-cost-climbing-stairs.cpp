class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int i=2;
        while(i<n){
            cost[i]+=min(cost[i-1],cost[i-2]);
            i+=1;
            }
        return min(cost[n-1],cost[n-2]);
    }
};