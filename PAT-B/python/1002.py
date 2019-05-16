class solution(object):
	num=['ling','yi','er','san','si','wu','liu','qi','ba','jiu']
	def print_t(self,n):
		n=int(n)
		sum = 0
		while(n!=0):
			sum+=n%10
			n=n//10
		temp=sum%10
		str=' '+self.num[temp]
		sum=sum//10	
		while(sum):
			temp=sum%10
			str=' '+self.num[temp]+str
			sum=sum//10
		str=str[1:]
		print(str,end='')
if __name__=='__main__'	:	
	#print(__name__)
	m=solution()
	a=input()
	m.print_t(a)


