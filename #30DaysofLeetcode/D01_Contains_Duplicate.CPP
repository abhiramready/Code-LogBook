class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
               set<int> seen;
                 for(int i : nums)
                    if (seen.count(i)) 
                        return true;
                    else
                        seen.insert(i); 
        return false;
    }
};
