class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> prefix;        
        // for(int i=0; i<nums.size(); i++){
        //     int pp = 1;
        //     for(int j=0;j<nums.size(); j++){
        //         if(i!=j){
        //             pp *= nums[j];
        //         }

        //     }
        //     prefix.push_back(pp);
        //     printf("%d",pp);
        // }
        // return prefix;


        int n = nums.size();
        vector<int> ans(n);
        vector<int> pre(n);
        vector<int> suff(n);

        pre[0] = 1;
        suff[n-1] = 1;

        for(int i=1; i<n; i++) pre[i]=pre[i-1]*nums[i-1];
        for(int i=n-2; i>=0; i--) suff[i]=suff[i+1]*nums[i+1];
        for(int i=0; i<n; i++) ans[i] = pre[i]*suff[i];

        return ans;


    }
};
