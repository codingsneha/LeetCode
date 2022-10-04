class Solution {
public:
    bool isSubsequence(string s, string t) {
        string x;
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < t.length(); j++) {
                if (s[i] == t[j]) {
                    x += s[i];
                    i++;
                }
            }
        }
        return x == s;
    }
};