class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int sm=0;
        for(int i=0; i<nums.size() - 2; i++){
            int l = i+1;
            int r = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            while(l<r){
                int sm = nums[i] + nums[l] + nums[r];
                if(sm > 0){
                    r--;
                }else if(sm < 0){
                    l++;
                }else{
                    ans.push_back({nums[i], nums[l], nums[r]});
                    r--;l++;
                    while (l < r && nums[l] == nums[l - 1]) l++;
                    while (l < r && nums[r] == nums[r + 1]) r--;
                }
            }    
        }
        return ans;
    }
};
