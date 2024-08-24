#include<bits/stdc++.h>
using namespace std;

class Solution

{
    public:
  string smallestWindow (string s, string p)
    {
        // Your code here
        
       if (p.size() > s.size()) return "-1";

  
    vector<int> required(26, 0);
    for (char c : p) {
        required[c - 'a']++;
    }

  
    vector<int> window_counts(26, 0);
    int left = 0, right = 0;
    int formed = 0; 
    int required_length = 0; 

    for (int count : required) {
        if (count > 0) required_length++;
    }

    int min_length = INT_MAX, min_start = 0;

    while (right < s.size()) {
        char c = s[right];
        window_counts[c - 'a']++;

    
        if (required[c - 'a'] > 0 && window_counts[c - 'a'] == required[c - 'a']) {
            formed++;
        }

        
        while (left <= right && formed == required_length) {
            char start_char = s[left];


            if (right - left + 1 < min_length) {
                min_length = right - left + 1;
                min_start = left;
            }

            window_counts[start_char - 'a']--;

            if (required[start_char - 'a'] > 0 && window_counts[start_char - 'a'] < required[start_char - 'a']) {
                formed--;
            }

            left++;
        }

        right++;
    }

    return (min_length == INT_MAX) ? "-1" : s.substr(min_start, min_length);
}
};