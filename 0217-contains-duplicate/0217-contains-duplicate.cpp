class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
      unordered_set<int> storage; //for storing numnbers from the input array
        for (int i = 0; i < nums.size(); i++) //traversing through given array of nums
        {
            if (storage.find(nums[i]) != storage.end()) // condition to check if element is already present
            {
                return true;
            }
            storage.insert(nums[i]); //insert element if no duplicates are found
        }
        
        return false;
        
    }
};
