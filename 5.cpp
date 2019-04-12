class Solution {
public:
    string longestPalindrome(string s) {
        int low = 0, high = 0, step = 0;
        for (int i = 0; i < s.size();i++)
            for (int j = i+step;j < s.size();j++)
                if (is_palindomic(s,i,j)){
                    if ((j - i) >= (high - low)){
                        low = i; high = j;;step = j -i;
                    }
                }
        return s.substr(low, high - low + 1);
        
    }
    bool is_palindomic(string &s, int i, int j){
        for (int a = i, b = j;a < b;a++, b--){
            if (s[a] != s[b])
                return false;
        }
        return true;
    }
};