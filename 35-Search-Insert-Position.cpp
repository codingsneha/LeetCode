class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        int s = 0, m, e = n.size() - 1;
        
        while (s <= e) {
            m = (s + e) / 2;
            if (n[m] == t) return m;
            else if (n[m] < t) s = m + 1;
            else e = e - 1;
        }
        return s;
    }  
};