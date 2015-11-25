product = 1
gcd_memo = {(1,1):1}


def unique(seq):
    seen = set()
    return [seen.add(x) or x for x in seq if x not in seen]

def GCD(x, y):
	global gcd_memo

	if (x,y) in gcd_memo:
		return gcd_memo[(x,y)]
		
	else:
		#print gcd_memo
		while (x * y != 0) :
			if (x >= y): 
				x = x % y
			else:
				y = y % x;
		return x + y

		gcd_memo = gcd_memo + {(x,y):GCD(x,y)}



def find_subsets(so_far, rest):
        #print 'parameters', so_far, rest

        global product

        if not rest:
			#print unique(so_far)
			if so_far != []:
				product = product * reduce(GCD, unique(so_far))
        else:
            find_subsets(so_far + [rest[0]], rest[1:])
            find_subsets(so_far, rest[1:])


t = input()

while(t):
	t = t - 1
	product = 1

	n = input()

	a = map(int, raw_input().split(' '))

	find_subsets([], a)
	#print gcd_memo
	print product % 1000000007
