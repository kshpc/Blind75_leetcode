class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        l=len(nums)
        if (l < 2):
            return False
        nums.sort()
        for i in range(l-1):
            if nums[i] == nums[i+1]:
                return True
        return False