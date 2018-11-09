test=int(input())
for z in range(0, test):
	x, y, z=input().split()
	x=int(x)
	y=int(y)
	z=int(z)
	ans=x*y
	count=0
	while(ans<=z):
		ans=ans*y
		count=count+1
	print(count)