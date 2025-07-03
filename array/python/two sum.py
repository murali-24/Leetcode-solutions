class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        indices = {}

        for idx, num in enumerate(nums):
            val = target - num
            if indices.get(val, None) is not None:
                return [indices.get(val, None), idx]
            indices[num] = idx


sol = Solution([])