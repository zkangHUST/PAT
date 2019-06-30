#题目描述
#在一个长度为n+1的数组里面的所有数字都在1~n的范围内，所以数组中至少
#有一个数字是重复的。请找出数组中任意一个重复的数字，但不能修改输入的
#数组。例如，如果输入长度为9的数组{2,3,5,4,3,2,6,7}， 那么对应的输出
#是重复的数字2或者3。

#思路解析
#遍历数组，把遍历到的数字放入集合，如果集合中已经存在该数字，则这个数字是重复的，返回即可
class Solution():
    def getDuplication(self, nums):
        l = set()
        for val in nums:
            if val not in l:
                l.add(val)
            else:
                return val
        return None
res = Solution()
nums = [2,4,5,4,3,2,6,7]
ans = res.getDuplication(nums)
print(ans)
