class Solution {
public:

    string encode(vector<string>& strs) {
        string str="";
        for(int i=0; i<strs.size(); i++){
            str += to_string(strs[i].size()) + "#" + strs[i];
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> sol;
        int i=0;
        while(i<s.size()){
            int hash_idx = s.find('#', i);
            int len = stoi(s.substr(i, hash_idx - i));
            string word = s.substr(hash_idx + 1, len);
            sol.push_back(word);
            i = hash_idx + 1 + len;
        }
        return sol;
    }
};
