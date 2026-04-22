#include<unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> keys;
        int len = 0;
        for (int i : nums){
            keys[i] = true;
            if (keys.size() == len){
                return true;
            }
            len++;
        }
    return false;
    }
};