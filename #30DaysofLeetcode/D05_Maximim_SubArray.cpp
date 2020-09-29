class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int end=0,far=nums[0];  
      for (int i = 0; i < nums.size(); i++) 
      { 
        end = end + nums[i]; 
        if (far <end) 
            far = end; 
        if (end < 0) 
            end = 0; 
      } 
    return far;
    }
};
