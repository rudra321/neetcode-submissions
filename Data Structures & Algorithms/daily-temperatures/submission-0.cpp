class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> result;
        for(int i=0; i<t.size(); i++){
            bool found = false;
            for(int j=i+1; j<t.size(); j++){
                if(t[i] < t[j]){
                    int res = j - i;
                    result.push_back(res);
                    found = true;
                    break;
                }

            }
            if(!found) result.push_back(0);

        }
        // result.push_back(0);
        
        
        
        
        
        return result;
    }
};
