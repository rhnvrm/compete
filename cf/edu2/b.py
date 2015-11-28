n,m = map(int, raw_input().split(' '))

a = map(int, raw_input().split(' '))
b = map(int, raw_input().split(' '))

a.sort()
#print a

def binary_search(a, x, lo=0, hi=None):
    

    if hi is None:
        hi = len(a)
    while lo < hi:

        mid = (lo+hi)//2
        #print lo, mid, hi
        midval = a[mid]
        if midval < x:
            lo = mid+1
        elif midval > x: 
            hi = mid
        else:
            return mid + len([x for x in a if x == a[mid]]) - 1


    return hi

#print a

for i in b:
	#print i 

	count = binary_search(a,i) 
	
	
	
	print count,
	#print ''
print ""
