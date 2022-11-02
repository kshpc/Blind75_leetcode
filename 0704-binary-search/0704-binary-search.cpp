class Solution 
{
public:
    int search(vector<int>& nums, int target) 
    {
     /*two pointer approach*/
        int leftMost = 0; //intial indexed pointer
        int rightMost = nums.size() - 1; //final indexed pointer
        while(leftMost <= rightMost) //base condition for 2 pointer
        {
            int midIndex = (leftMost + rightMost)/2; //getting middle element using 2 pointers
            
            if(nums[midIndex] == target) return midIndex;
            
            else if(nums[midIndex] > target) //if element exists in first half of array
            {
                rightMost = midIndex - 1; // assign mid -1 index to rightMost pointer
            }
            else       //if element exists in second half of the array
            {
                leftMost = midIndex + 1; //assign mid +1 index to leftMost pointer
            }
        }
      return -1;  
    }
};