class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l=0,r=m-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(target < matrix[mid][0]){
                r = mid - 1;
            }else if(target > matrix[mid][n-1]){
                l = mid + 1;
            }else{
                int _l = 0;
                int _r = n - 1;
                while(_l<=_r){
                    int _mid = _l + (_r - _l)/2;
                    if(target == matrix[mid][_mid]){
                        return true;
                    }else if(target < matrix[mid][_mid]){
                        _r = _mid - 1;
                    }else if(target > matrix[mid][_mid]){
                        _l = _mid + 1;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
