#x = sizes of a,b
x = raw_input().split()
sa = int(x[0])
sb = int(x[1])

#y = k,m
y = raw_input().split()
k = int(y[0])
m = int(y[1])

#array a
a = raw_input().split()
a = map(int, a)

#array b
b = raw_input().split()
b = map(int,b)

#choose a subarray of size k in a and m in b
#st all numbers in sa < sb

found = 0

for i in xrange(0,sa - k):
	for j in xrange(i,sb - m):
		#save first and lasts of subarrays
		fa = a[i]
		fb = b[j]
		la = a[i+k]
		lb = b[j+m]
		#compare subarrays
		# a = 1 2 3
		# b = 2 3 4
		# la < fb
		if(la < fb):
			found = 1
			#exit loop
			i = sa + 1
			j = sb + 1

if(found): print 'YES'
else: print 'NO'
