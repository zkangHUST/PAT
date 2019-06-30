#题目描述
#在一个长度为n+1的数组里面的所有数字都在1~n的范围内，所以数组中至少
#有一个数字是重复的。请找出数组中任意一个重复的数字，但不能修改输入的
#数组。例如，如果输入长度为9的数组{2,3,5,4,3,2,6,7}， 那么对应的输出
#是重复的数字2或者3。

#思路解析
#根据题目描述，所有的数字在1-n范围内，而数组长度是n+1,因此必有一个数字m是重复的
#应用二分查找法，可以把数字1~n分为两部分，1~m和m+1~n,数一下数组中1~m数字出现的
#个数，大于m个,则重复数字在1~m中，否则，重复数字在m+1~n当中，继续二分查找，直到找
#出一个重复数字
class Solution():
    def getDuplication(self, nums):
        start = 1
        end = len(nums)-1
        #//表示地板除
        middle = (start + end)//2 
        while (start != end):   
            ans = self.count(start,middle,nums)
            if(ans > middle - start + 1):
                end = middle
                middle = (start + end)//2
            else:
                start = middle + 1
                middle = (start + end)//2
        return start
                

    def count(self, start,end,nums):
        count = 0
        for val in nums:
            if (val >= start and val <= end):
                count+=1
        return count

res = Solution()
nums = [2,4,5,4,3,2,6,7]
ans = res.getDuplication(nums)
print(ans)
