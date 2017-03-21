a = input()

albet = "abcdefghijklmnopqrstuvwxyz"

def frequency(x,y):
	f = 0
	for i in range(0, len(x)):
		if(x[i] == y):
			f = f + 1
	return f

alp = [None for _ in range(26)]

alphabet = [[0]*26 for i in range(26)]
	
maximum = 0

clean_buckets = []

for i in xrange(0,a):
	alp= [0 for _ in range(len(alp))]

	t = raw_input()
	bucket = [None for _ in range(26)]
	count = 0

	for i in range(0, len(albet)):
		bucket[i] = frequency(t, albet[i])
		if(bucket[i] != 0):
			alp[count] = i
			count = count + 1
	if count ==2 :
		alphabet[alp[0]][alp[1]] += bucket[alp[0]]+bucket[alp[1]]
	if count ==1 : 			
		alphabet[alp[0]][alp[0]] += bucket[alp[0]]

x = alphabet	

max = 0
for i in range(0,len(x[0])): 
	for j in range(i, len(x[0])):
		if i!=j :
			#print i, j
			mx = x[i][j] + x[j][i] + x[i][i] + x[j][j]
			#print x[i][j] , x[j][i] , x[i][i] , x[j][j]
			#print mx 
			if(mx > max): max  = mx


print max

#print alp
#print maximum