class Solution {
public:
    int romanToInt(string s) {
        int ans = 0, sub = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            ans += operat(ch, &sub);
        }
        return ans;
    }
    int operat(char ch, int *sub) {
        switch (ch) {
            case 'I':
                *sub = 1;
                return 1;
            case 'V':
                if (*sub == 1) return 3;
                return 5;
            case 'X':
                if (*sub == 1) return 8;
                *sub = 2;                
                return 10;
            case 'L':
                if (*sub == 2) return 30;
                return 50;
            case 'C':
                if (*sub == 2) return 80;
                *sub = 3;
                return 100;
            case 'D':
                if (*sub == 3) return 300;
                return 500;
            case 'M':
                if (*sub == 3) return 800;
                return 1000;
        }
        return 0;
    }
};