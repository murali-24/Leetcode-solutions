class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        solutions = []
        nums.sort()
        length = len(nums) 
        for i in range(0,length-2):
            if i>0 and nums[i] == nums[i-1]:
                continue
            else:
                j = i+1
                k = length-1
                
                while(j<k):
                    if (nums[i] + nums[j] + nums[k]) == 0:
                        solutions.append([nums[i], nums[j], nums[k]])
                        while j < k and nums[j] == nums[j + 1]:
                            j += 1
                        while j < k and nums[k] == nums[k - 1]:
                            k -= 1
                        j+=1
                        k-=1
                    elif (nums[i] + nums[j] + nums[k]) < 0:
                        j+=1
                    elif (nums[i] + nums[j] + nums[k]) > 0:
                        k-=1
        return solutions
                    
solution = Solution()
print(solution.threeSum([-1,0,1,2,-1,-4]))



        