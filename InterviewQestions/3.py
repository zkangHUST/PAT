# 题目描述
# 在一个二维数组中，每一行都从左到右递增，每一列也从上到下递增，
# 请写一个函数给出这个二维数组和一个整数，判断数组中是够含有这个数。


# 思路分析
# 例如有这样一个数列，从中找是否存在7
# 1 2 9 10
# 3 4 11 12
# 5 7 12 14
# 6 9 14 16
#从右上角开始，10>7那么排除第4列，跳到第3列，9>7同样排除第3列，跳到第2列
#2<7,那么排除第一行，跳到第二行，4<7，排除第二行,跳到第三行，找到7
class Solution():
    def find(self, nums, key, index):
        column = len(nums[0])
        line = len(nums)
        j = column-1
        i = 0
        while(j >= 0 and i < line):
                val = nums[i][j]
                if val > key:
                    j -= 1
                elif val < key:
                    i += 1
                else:
                    index[0] = i
                    index[1] = j
                    return True
        return False
res = Solution()
index=[0,0]
nums=[[1, 2, 9, 10], [3, 4, 11, 12], [5, 7, 12, 14],[6, 9, 14, 16]]
ans = res.find(nums,7,index)
print(index)
print(ans)