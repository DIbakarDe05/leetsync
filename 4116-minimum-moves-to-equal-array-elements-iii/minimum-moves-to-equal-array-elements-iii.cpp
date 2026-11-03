class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end()),mv=0;
        for(int i=0;i<nums.size();i++){
            mv+=mx-nums[i];
        }  
        return mv;
    }
};