class Solution:
    def twoSum(self,nums,target):
        output=[]
        flag=0
        for i in range(0, len(nums), 1):
            if (flag == 1):
                break
            output.clear()
            for j in range(0, len(nums), 1):
                if (i == j):
                    continue
                if (target == nums[i] + nums[j]):
                    output.append(i)
                    output.append(j)
                    flag = 1
                    break
        return output
