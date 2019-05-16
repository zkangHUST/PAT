class solution(object):	
	def output(self):
		self.m=input()
		self.m=self.m.split()
		print(self.m[-1],end='')
		self.m=self.m[:-1]
		self.m = self.m[::-1]
		for n in self.m:
			print(' '+n,end='')		
#print(self.m)	
if __name__=='__main__':
	m = solution()
	m.output()
