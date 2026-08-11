class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        if(n==0) return 0;

        vector<int> lmx(n);
        vector<int> rmx(n);
        lmx[0] = h[0];
        for(int i=1; i<n; i++){
            lmx[i] = max(lmx[i-1], h[i]);
        }
        rmx[n-1] = h[n-1];
        for(int i=n-2;i>=0;i--){
            rmx[i] = max(rmx[i+1], h[i]);
        }
        int res=0;
        for(int i=0; i<n; i++){
            res+= min(lmx[i],rmx[i])-h[i];
        }
        return res;

    }
};
