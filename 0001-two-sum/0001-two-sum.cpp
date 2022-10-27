class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> mapOfVecIndices; // hash map with key as element of vec & value as vec index
        for(int i=0; i<nums.size(); i++)
        {
    /*condition to check if difference of target and element in vec is existing in map or not*/
            if(mapOfVecIndices.find(target-nums[i])!=mapOfVecIndices.end())
            {
                return{mapOfVecIndices[target-nums[i]], i}; //return the indices of elements that sum upto target
            }
            //mapOfVecIndices[nums[i]]=i; 
            mapOfVecIndices.insert(pair<int, int>(nums[i],i));//else insert the index into map with element in vec as key
        } 
        return {};
    }
};