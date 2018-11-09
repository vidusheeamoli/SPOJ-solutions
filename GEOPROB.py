n=int(input())
test=0
while(test<n):
	test=test+1
	a, b, c=raw_input().split()
	a=int(a)
	b=int(b)
	c=int(c)
	ans=2*b-(a+c)
	print(ans)