class solution(object):	
	count=[0,0,0,0,0,0,0,0,0,0]
	def output(self):
		self.m=input()		
		for n in self.m:
			self.count[int(n)]+=1	
		for i in range(0,10):
			if(self.count[i]!=0):
				print("%d:%d"%(i,self.count[i]))
#print(self.m)	
if __name__=='__main__':
	m = solution()
	m.output()
