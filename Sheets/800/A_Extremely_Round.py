"""
Author: Rahul Samant
Created: 2025-11-04 20:01:40
"""

# ==================== INPUT HELPERS ====================
def read_int():
    return int(input())

def read_ints():
    return map(int, input().split())

def read_list():
    return list(map(int, input().split()))

def read_str():
    return input()

def read_strs():
    return input().split()

def read_matrix(n):
    return [read_list() for _ in range(n)]

def read_str_matrix(n):
    return [list(input()) for _ in range(n)]

def read_graph(n, m, directed=False, weighted=False):
    from collections import defaultdict
    graph = defaultdict(list)
    for _ in range(m):
        if weighted:
            u, v, w = read_ints()
            graph[u].append((v, w))
            if not directed:
                graph[v].append((u, w))
        else:
            u, v = read_ints()
            graph[u].append(v)
            if not directed:
                graph[v].append(u)
    return graph

# Function to check if a number is extremely round
def check(x):
	count_of_digits = 0  # To count total digits in x
	count_of_zeroes = 0  # To count number of zeroes in x
	while x > 0:  # Loop through each digit of x
		if x % 10 == 0:  # Check if the current digit is zero
			count_of_zeroes += 1  # Increment zero count
		count_of_digits += 1  # Increment digit count
		x //= 10  # Remove the last digit from x
	# Return true if all digits except one are zero
	return count_of_zeroes == count_of_digits - 1

# Precomputing all the extremely round numbers up to 999999
round_numbers = []
for i in range(1, 1000000):  # Loop through all numbers from 1 to 999999
	if check(i):  # Check if the number is extremely round
		round_numbers.append(i)  # Store it in the list

def solve():
    n = read_int()
    answer = 0  # To store the count of extremely round numbers <= n
    for round_number in round_numbers:  # Iterate through precomputed round numbers
        if round_number <= n:  # Check if the round number is within the limit
            answer += 1  # Increment the count
        else:
            break  # Stop if the round number exceeds n
    print(answer)  # Output the result for the current test case


t = read_int()
for _ in range(t):
    solve()