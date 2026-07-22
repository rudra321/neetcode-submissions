class Solution {
public:
    
    bool isPalindrome(string s) {
        string result="";
        for (char c : s) {
            if (isalpha((unsigned char)c)) {
                result += tolower((unsigned char)c);
            }
            if (isdigit((unsigned char)c)) {
                result += (unsigned char)c;
            }
        }
        // printf("%s\n", result.c_str());
        /*
            std::string message = "Hello, World!";
            printf("%s\n", message.c_str());
        */
        int l = 0, r = result.size() - 1;

        while(l <= r){
            if(result[l] != result[r]){
                return false;
            }else{
                l++;
                r--;
            }
        }
        return true;
    }
};
