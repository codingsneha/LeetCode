class Solution {
public:
    int firstBadVersion(int n) {
        
        long long int start = 1, end = n, mid, left = 0;
        
        while (start <= end) {
            mid = (start + end)/2;
            if (isBadVersion(mid)){
                end = mid - 1;
                left = mid;
            }
            else start = mid + 1;
        }
        
        return left;
    }        
};