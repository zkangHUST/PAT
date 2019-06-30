#题目描述
#请实现一个函数，将一个字符串中的空格替换成“%20”。
#例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

#思路分析
#统计空格个数，判断内存是否足够，两个指针从后往前遍历，复制，碰到空格则填充%20
class Solution():
    def ReplaceBlank(self,src):
    
        p1 = len(src)
        for i in range(p1):
            if (src[i] == ' '):
                src.append(' ')
                src.append(' ')
        p1 -= 1
        p2 = len(src)-1
        while(p1 >= 0):
            if(src[p1] == ' '):
                src[p2] = '0'
                p2-=1
                src[p2] = '2'
                p2-=1
                src[p2] = '%'
            elif(p1 != p2):   
                src[p2] = src[p1]
            else:
                break
            p1-=1
            p2-=1
        return src        


s=list("hello world")
res = Solution()
ans = res.ReplaceBlank(s)
ans=''.join(ans)
print(ans)
