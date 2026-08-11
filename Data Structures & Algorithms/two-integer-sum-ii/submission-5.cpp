class Solution {
public:
    vector<int> twoSum(vector<int>& ns, int t) {
        int l = 0;
        int r = ns.size() - 1;
        while(l < r){
            int x = ns[l] + ns[r];
            if(x > t) r--;
            else if(x<t) l++;
            else return {l+1, r+1};
        }
        return{};
    }
};
