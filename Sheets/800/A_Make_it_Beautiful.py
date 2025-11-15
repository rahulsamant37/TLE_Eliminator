"""
Author: Rahul Samant
Created: 2025-11-04 19:37:03
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

def solve():
    n = read_int()
    arr = read_list()
    arr.sort() # Sort the array in non-decreasing order
    max_number = arr[-1] # Maximum element in the array
    min_number = arr[0] # Minimum element in the array
    if max_number == min_number: # Check if all elements are the same
        print("NO") # If all elements are the same, it's impossible to make it beautiful
    else:
        print("YES") # It is possible to reorder to make it beautiful
        print(max_number, *arr[:-1]) # Start with the maximum element and print the rest

t = read_int()
for _ in range(t):
    solve()