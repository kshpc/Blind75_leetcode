class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
    /*creating a unordered map with key as string and value as vector of strings*/    
        unordered_map<string, vector<string>> map; 
        string temp_store; //creating a temporary variable to store original value of string
        
        for(int i=0; i<strs.size(); i++) //traversing through the input vector of strings
        {
            temp_store = strs[i]; // storing the string value in temp
            sort(strs[i].begin(), strs[i].end()); //sort each string in the given list
            map[strs[i]].push_back(temp_store); // push back key as the sorted string, with value as original string
        }
        
        vector<vector<string>> resultant_list; //since the output list is of type vector of vector strings
        for(auto itr=map.begin(); itr!=map.end(); itr++) //using iterator to traverse the map
            resultant_list.push_back(itr->second); //pushing only the value bucket to the resultant vector of vectors
        return resultant_list; // printing list
    }
};