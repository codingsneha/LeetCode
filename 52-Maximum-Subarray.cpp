#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> f(nums.size(),0);
        f[0] = nums[0];
        for(int i=1;i<nums.size();i++) {
            if(f[i-1]<0)
                f[i] = nums[i];
            else
                f[i] = f[i-1]+nums[i];
        }
        return *std::max_element(f.begin(), f.end());
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
    cout << obj.maxSubArray(myNumbers);
}