class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        


        for(int i=0; i<nums.size(); i++){
            int pp = 1;
            for(int j=0;j<nums.size(); j++){
                if(i!=j){
                    pp *= nums[j];
                }

            }
            prefix.push_back(pp);
            printf("%d",pp);
        }
        return prefix;
    }
};
