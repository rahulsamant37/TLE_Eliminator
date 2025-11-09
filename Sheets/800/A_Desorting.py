"""
Author: Rahul Samant
Created: 2025-11-04 02:46:07
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

from collections import Counter

def solve():
    n = read_int()
    arr = read_list()
    if arr!= sorted(arr):
        print(0)
    elif len(Counter(arr))==1:
        print(1)
    else:
        operations = float('inf')
        for i in range(1,len(arr)):
            diff = arr[i]-arr[i-1]
            formate = diff//2+1
            operations = min(formate, operations)
        print(operations)
        

t = read_int()
for _ in range(t):
    solve()