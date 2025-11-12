"""
Author: Rahul Samant
Created: 2025-11-04 03:12:32
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
    n, k, x = map(int, input().split())

    # Impossible case
    if k == 1 and x == 1:
        print("NO")
        return

    # Case 1: x != 1 -> we can use all 1's safely
    if x != 1:
        print("YES")
        print(n)
        print(" ".join(["1"] * n))
        return

    # Case 2: x == 1
    # Then we cannot use 1, but we can use {2, 3, ..., k}
    if k == 1:
        print("NO")
    elif k >= 2:
        if n % 2 == 0:
            print("YES")
            print(n // 2)
            print(" ".join(["2"] * (n // 2)))
        else:
            if k >= 3:
                # Example: n = 3 -> 3
                # For odd n, use one 3 and the rest 2s
                print("YES")
                print(n // 2)
                print(" ".join(["2"] * (n // 2 - 1) + ["3"]))
            else:
                print("NO")


t = read_int()
for _ in range(t):
    solve()