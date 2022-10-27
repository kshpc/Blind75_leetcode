class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        sizeofInput=len(nums)
        if (sizeofInput < 2):
            return False
        nums.sort()
        for i in range(sizeofInput-1):
            j = i+1
            if nums[i] == nums[j]:
                return True
        return False