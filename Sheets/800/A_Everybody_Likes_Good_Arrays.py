"""
Author: Rahul Samant
Created: 2025-11-04 19:46:16
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

from collections import deque

def solve():
    n = read_int()
    arr = deque(read_list())
    
    stack = deque([arr.popleft()])
    count = 0a

    while arr:
        a = stack.pop()
        b = arr.popleft()
        # If parity differs
        if (a % 2 == 0 and b % 2 != 0) or (a % 2 != 0 and b % 2 == 0):
            stack.extend([a, b])
        else:
            stack.append(a * b)
            count += 1

    print(count)

t = read_int()
for _ in range(t):
    solve()