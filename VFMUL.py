n=input()
test=0
while(test<n):
	x, y = [int(x) for x in raw_input().split()]
	ans=x*y
	print(ans)
	test=test+1
	