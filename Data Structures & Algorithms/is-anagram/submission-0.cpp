#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> seen;
        for (char c: s){
            seen[c]++;
        }
        for (char c: t){
            seen[c] --;
        }
        for (const auto& [key, val]: seen){
            if(val != 0){return false;}
        }
        return true;
    }
};
