n = input()

a = map(int, raw_input().split(' '))

'''
for(int i = size; size >= 1; i--){
		for(int j = 0; j+size <= v.size(); j++){
			int mx = 
		}
	}

'''
answer = 2
 
for i in range(0, n):
    mn, mmxn, count = a[i], a[i], 1
    for j in range(i+1, n):
        if a[j] < mn: mn = a[j]
        elif a[j] > mmxn: mmxn = a[j]
        if mmxn - mn > 1: break
        count += 1
    if count > answer: answer = count
    if answer + i > n: break
 
print answer