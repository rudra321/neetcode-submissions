class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0;
        int r = h.size() - 1;
        int ans = 0;
        while(l < r){
            int mxV = min(h[l], h[r]) * (r-l);
            ans = max(mxV, ans);
            if(h[l] <= h[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;

    }
};
