class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0; i<n; i++){
            int rem = target-nums[i];
            auto it = mp.find(rem);

            if(it != mp.end()){ 
                ans.push_back(it->second);
                ans.push_back(i); 
                return ans;
            }
            mp[nums[i]]=i;
            
        }
        return ans;
    }
};
