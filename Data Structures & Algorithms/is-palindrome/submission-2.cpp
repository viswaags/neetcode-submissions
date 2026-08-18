class Solution {
public:
    bool isPalindrome(string s) {
        string s1;

        for(int i = 0; i < s.size(); i++){
            char ch = tolower(s[i]);

            if((ch < 'a' || ch > 'z') && (ch < '0' || ch > '9'))
            {
                continue;
            }

            s1 += ch;
        }

        int l = 0, r = s1.size()-1;

        while(l <= r){
            if(s1[l] != s1[r]){
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
};
