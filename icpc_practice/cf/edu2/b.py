n,m = map(int, raw_input().split(' '))

a = map(int, raw_input().split(' '))
b = map(int, raw_input().split(' '))

a.sort()
#print a

def binary_search(a, x, lo=0, hi=None):
	found = -1

	if hi is None:
		hi = len(a) - 1
	while lo <= hi:

		mid = (lo+hi)>>1
		midval = a[mid]

		if midval < x:
			lo = mid + 1
		elif midval > x: 
			hi = mid - 1
		else:
			found = mid
			lo = mid + 1


	return found

#print a



for i in b:
	j=i
	count = -1
	while(count == -1):
		count = binary_search(a,j)
		if j < 0j-=1
	
	#while()
	print count+1,
	#print ''
print ""
