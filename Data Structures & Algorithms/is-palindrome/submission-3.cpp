class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int l = 0, r = n - 1;

        while(l <= r){
            char c1 = tolower(s[l]);
            char c2 = tolower(s[r]);

            if(!isalnum(c1)){
                l++;
                continue;
            }

            if(!isalnum(c2)){
                r--;
                continue;
            }

            if(c1 != c2){
                return false;
            }

            l++;
            r--;
        }

        return true;
    }
};
