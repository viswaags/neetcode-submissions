class Solution {
public:
    bool isPalindrome(string s) {
        string s1, s2;

        for(int i = 0; i < s.size(); i++){
            char ch = tolower(s[i]);

            if((ch < 'a' || ch > 'z') && (ch < '0' || ch > '9'))
            {
                continue;
            }

            s1 += ch;
        }

        s2 = s1;

        reverse(s2.begin(), s2.end());

        return s1 == s2;
    }
};
