class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp_s;
        map<char,int> mp_t;
        int s_s = s.size();
        int t_s = t.size();
        if (s_s != t_s) return false;
        for(int i=0; i<s_s; i++){
            mp_s[s[i]] += 1;
        }
        for(int i=0; i<t_s; i++){
            mp_t[t[i]] += 1;
        }

        if(mp_s == mp_t) return true;
        return false;


    }
};
