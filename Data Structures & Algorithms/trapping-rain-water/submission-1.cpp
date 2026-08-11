class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        if(n==0) return 0;

        int l=0, r=n-1;
        int lmx = h[l], rmx = h[r];
        int res = 0;
        while(l<r){
            if(lmx < rmx){
                l++;
                lmx = max(lmx, h[l]);
                res+=lmx - h[l];
            }else{
                r--;
                rmx = max(rmx, h[r]);
                res+=rmx - h[r];
            }
        }
        return res;
    }
};
