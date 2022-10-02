class Solution {
public:
    bool isPalindrome(int x) {
        long int rev = 0;
        for (int y = x; y > 0; y /= 10)
            rev = (rev * 10) + (y % 10);
        return rev == x;
    }
};


/*
SOLUTION USING STRINGS

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string f = s;
        reverse (s.begin(), s.end());
        return s == f;
    }
};

*/
