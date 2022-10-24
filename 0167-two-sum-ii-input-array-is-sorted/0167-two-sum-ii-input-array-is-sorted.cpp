class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mapOfVecIndices; // hash map with key as element of vec & value as vec index
        for(int i=0; i<numbers.size(); i++)
        {
    /*condition to check if difference of target and element in vec is existing in map or not*/
            if(mapOfVecIndices.find(target-numbers[i])!=mapOfVecIndices.end())
            {
                return{mapOfVecIndices[target-numbers[i]]+1, i+1}; //return the indices of elements that sum upto target
            }
            mapOfVecIndices[numbers[i]]=i; //else insert the index into map with element in vec as key
        } 
        return {}; //return empty if elements don't sum to target
    }
};