class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> t;
        for (auto x: nums)
            if (t.find(x) == t.end()) t.insert(x); 
        vector<int> r;
        for (auto i = 1; i <= nums.size(); ++ i) 
            if (t.find(i) == t.end()) r.push_back(i);
        return r;
    }
};
