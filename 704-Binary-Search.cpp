#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int start = 0, end = nums.size(), mid = end/2;
        while(start != end) {
            mid = (start+end)/2;
            if (nums[mid] == target) return mid;
            
            if (target>mid) start = mid;
            else if (target<mid) end = mid;
        }
        return -1;
    }
};


main() {
    
    std::string myString = "5 -1 7 -10";
    std::stringstream iss( myString );

    int number;
    std::vector<int> myNumbers;
    while ( iss >> number )
        myNumbers.push_back( number );

    Solution obj;
    cout << obj.search(myNumbers, 7);

    return 0;
}