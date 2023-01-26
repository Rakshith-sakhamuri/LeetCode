class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN,x=0;
        for(int i=0;i<nums.size();i++){
            x+=nums[i];
            if(maxi<x) maxi=x;
            if(x<0) x=0;
        }
        return maxi;
    }
};
