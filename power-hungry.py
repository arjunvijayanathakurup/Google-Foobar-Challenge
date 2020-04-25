import itertools

def find_subset(values, size):
	return list(itertools.combinations(values, size))	

def get_negative(xs):
	negative_val = 0
	for i in xs:
		if i < 0 :
			negative_val += 1
	return negative_val

def get_positive(xs):
	positive_val = 0
	for i in xs:
		if i > 0:
			positive_val += 1
	return positive_val
	
def solution(xs):
	prod = 1
	greatest = 0
	negative = get_negative(xs)
	positive = get_positive(xs)
	if (positive == 0 and negative == 1):
		for i in xs:
			if i < 0:
				return str(i)
	elif (positive == 0 and negative == 0):
		return str(xs[0])
	elif positive == 0:
		negative % 2 == 0:
		

	return(str(greatest))


print(solution([2, 0, 2, 2, 0]))
print(solution([-2, -3, 4, -5]))
print(solution([0, 0, 0, -43]))
print(solution([0, 0]))
print(solution([0, 0, 4]))
print(solution([1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000]))

# TEST CASE FOR {0, 0}
