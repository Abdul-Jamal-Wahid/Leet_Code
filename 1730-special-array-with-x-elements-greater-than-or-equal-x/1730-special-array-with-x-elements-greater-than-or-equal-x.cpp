class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(1001,0);
        for(auto& v:nums){
            arr[v]++;
        }
        int t=n;
        for(int i=0;i<1001;i++){
            if(i==t){
                return i;
            }
            t-=arr[i];
        }
        return -1;
    }
};