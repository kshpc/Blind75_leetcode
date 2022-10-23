class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> freq_s,freq_t; //creating a map to store frequencies of individual charcaters in each string
        if(s.length()!=t.length()) return false; //checking the condition if both strings are of same length
        for(int i=0; i<s.length(); i++)
        {
            freq_s[s[i]]++; //incrementing count of individual characters in map s as we are traversing in string s
            freq_t[t[i]]++; //incrementing count of individual characters in map t as we are traversing in string s
        }
        for(auto j:s)  
        {
            if(freq_s[j]!=freq_t[j]) return false; //comparing frequency in both maps
        }
        return true;
    }
};