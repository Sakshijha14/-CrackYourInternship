// DAY10question3
//https://www.geeksforgeeks.org/problems/print-anagrams-together/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        
        map<string,vector<string>>result;
        
        for(auto str:string_list){
            string s=str;
            sort(s.begin(),s.end());
            result[s].push_back(str);
        }
        vector<vector<string>>answer;
        for(auto it=result.begin();it!=result.end();it++){
            answer.push_back(it->second);
        }
        return answer;
    }
};