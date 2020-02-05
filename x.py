

def gcd(a,b):
	if (b==0):
		return a
	else:
		return gcd(b,a%b)


x=int(input())



while x>0:
    y,z=input().split(" ")
    y=int(y)
    z=int(z)
    print(gcd(y,z))
    x=x-1

