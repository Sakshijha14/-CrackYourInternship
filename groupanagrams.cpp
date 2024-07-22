//DAY9question4
//https://leetcode.com/problems/group-anagrams/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(auto s:strs){
            string word=s;
            sort(s.begin(),s.end());
            mp[s].push_back(word);
        }
        vector<vector<string>>result;
        for(auto it:mp){
            vector<string>t;
            for(auto i:it.second){
                t.push_back(i);
            }
            result.push_back(t);
        }
        return result;
        
    }
};