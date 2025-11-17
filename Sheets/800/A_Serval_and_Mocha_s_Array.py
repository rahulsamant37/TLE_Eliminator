"""
Author: Rahul Samant
Created: 2025-11-04 07:27:43
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

import math

def gcd_of_list(numbers):
    if not numbers:
        return 0  # Or raise an error, depending on desired behavior for empty lists
    
    result = numbers[0]
    for i in range(1, len(numbers)):
        result = math.gcd(result, numbers[i])
    return result

def solve():
    n = read_int()
    arr = read_list()
    is_beautiful = False # Flag to check if a beautiful array can be formed

    for i in range(n):
        for j in range(i + 1, n):
            # Check if the gcd of any pair of elements is less than or equal to 2
            if math.gcd(arr[i], arr[j]) <= 2:
                is_beautiful = True # Set flag to True if condition is met
    if is_beautiful:
        print("Yes")
    else:
        print("No")

t = read_int()
for _ in range(t):
    solve()