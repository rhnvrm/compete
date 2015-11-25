n = input()

a = map(int, raw_input().split(' '))

'''
for(int i = size; size >= 1; i--){
		for(int j = 0; j+size <= v.size(); j++){
			int mx = 
		}
	}

'''
answer = 0

for size in xrange(n,1,-1):
	for j in xrange(0, len(a)-size+1):
		if(abs(max(a[j:j+size]) - min(a[j:j+size])) <= 1):
			if(answer < size):
				answer = size
				break
print answer

#print a