class Solution {
public:
    int findMaxK(vector<int>& nums) {
       int res=-1;
       sort(nums.begin(),nums.end());
       int s=0,e=nums.size()-1;
       while(s<=e){
           if(nums[s]==-(nums[e])){
               return nums[e];
           }else if(-nums[s]>nums[e]){
               s+=1;
           }else{
               e-=1;
           }
    
       }
       return -1;
    }
};