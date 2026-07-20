class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /*
            [
                {"1": 2},
                {"2": 4},
                {"3": 6}
            ]
        */
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] +=1;
            if(mp[nums[i]] > 1) return true;
        }
        return false;
    }
};