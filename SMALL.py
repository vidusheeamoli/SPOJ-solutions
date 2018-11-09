def gcd(a, b):
	if a==0:
		return b
	else:
		return gcd(b%a, a)
		

dp = [0] * 10005
dp[0] = 1
ans=1;
for i in range(1, 10005):
	g=gcd(ans, i)
	ans=(ans*i)/g
	dp[i]=ans
	


T=input()
T=int(T)
test=0
while(test<T):
	n=input()
	n=int(n)
	ans=dp[n]
	ans=ans%1000000007
	print(ans)
	test=test+1