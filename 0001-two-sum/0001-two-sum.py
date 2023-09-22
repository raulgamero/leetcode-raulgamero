class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        res = {}
        for i in range(0,len(nums)):
            aux = target - nums[i]
            if aux in res:
                return res[aux], i
            else:
                res[nums[i]] = i