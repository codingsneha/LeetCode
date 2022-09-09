#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int j=0;
        for(int i = 0; i < nums.size()-1; i++)
            nums[++j] += nums[i];

        cout << "[ ";
        for (auto j = nums.begin(); j != nums.end(); ++j)
        cout << *j << " ";
        cout << "]";

        return nums;
    }
};


main() {
    
    std::string myString = "1 7 70 2";
    std::stringstream iss( myString );

    int number;
    std::vector<int> myNumbers;
    while ( iss >> number )
        myNumbers.push_back( number );

    Solution obj;
    obj.runningSum(myNumbers);
}