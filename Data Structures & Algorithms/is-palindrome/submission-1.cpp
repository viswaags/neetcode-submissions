class Solution {
public:
    bool isPalindrome(string s) {
        string s1, s2;
        stack<char> st;

        for(int i = 0; i < s.size(); i++){
            char ch = tolower(s[i]);

            if((ch < 'a' || ch > 'z') && (ch < '0' || ch > '9'))
            {
                continue;
            }

            s1 += ch;
            st.push(ch);
        }

        while(!st.empty()){
            s2 += st.top();
            st.pop();
        }

        return s1 == s2;
    }
};
