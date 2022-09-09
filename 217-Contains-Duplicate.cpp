#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {

        unordered_map<int, bool> map;

        for (int i = 0; i < nums.size(); i++) {

            if (map.count(nums[i])) return true;
            else    map[nums[i]] = true;

        }
        
        return false;
    }
};


main() {
    vector<int> n;
    string in;
    cin >> in;
    for(int i = 1; i<in.length(); i+=2){
        n.push_back((int)in[i]);
    }
    Solution obj;
    cout << obj.containsDuplicate(n);
}