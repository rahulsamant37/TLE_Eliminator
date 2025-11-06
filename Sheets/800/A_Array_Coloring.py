"""
Author: Rahul Samant
Created: 2025-11-04 02:36:20
"""

import sys
from collections import defaultdict, deque, Counter
from math import sqrt, gcd, ceil, floor, inf
from itertools import combinations, permutations, accumulate
from functools import lru_cache, reduce
from heapq import heappush, heappop, heapify
from bisect import bisect_left, bisect_right

# ==================== FAST I/O ====================
def setup_io():
    """Setup fast I/O for local testing"""
    try:
        sys.stdin = open('input.txt', 'r')
        sys.stdout = open('output.txt', 'w')
    except FileNotFoundError:
        pass

input = lambda: sys.stdin.readline().strip()

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
    """Read graph as adjacency list"""
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

# ==================== MATH UTILITIES ====================
MOD = 10**9 + 7
MOD2 = 998244353

def lcm(a, b):
    return (a * b) // gcd(a, b)

def pow_mod(base, exp, mod=MOD):
    result = 1
    base %= mod
    while exp > 0:
        if exp & 1:
            result = (result * base) % mod
        base = (base * base) % mod
        exp >>= 1
    return result

def mod_inv(a, mod=MOD):
    return pow_mod(a, mod - 2, mod)

def is_prime(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(sqrt(n)) + 1, 2):
        if n % i == 0:
            return False
    return True

def sieve(n):
    """Sieve of Eratosthenes"""
    primes = [True] * (n + 1)
    primes[0] = primes[1] = False
    for i in range(2, int(sqrt(n)) + 1):
        if primes[i]:
            for j in range(i * i, n + 1, i):
                primes[j] = False
    return [i for i in range(n + 1) if primes[i]]

# Precompute factorials for combinatorics
def precompute_factorials(n, mod=MOD):
    fact = [1] * (n + 1)
    for i in range(1, n + 1):
        fact[i] = (fact[i-1] * i) % mod
    return fact

def nCr(n, r, fact, mod=MOD):
    if r > n or r < 0:
        return 0
    return (fact[n] * mod_inv(fact[r], mod) % mod * mod_inv(fact[n-r], mod)) % mod

# ==================== GRAPH UTILITIES ====================
def bfs(graph, start, n):
    visited = [False] * (n + 1)
    dist = [-1] * (n + 1)
    queue = deque([start])
    visited[start] = True
    dist[start] = 0
    
    while queue:
        u = queue.popleft()
        for v in graph[u]:
            if not visited[v]:
                visited[v] = True
                dist[v] = dist[u] + 1
                queue.append(v)
    return dist

def dfs(graph, start, visited=None):
    if visited is None:
        visited = set()
    visited.add(start)
    for neighbor in graph[start]:
        if neighbor not in visited:
            dfs(graph, neighbor, visited)
    return visited

# ==================== DSU (Union-Find) ====================
class DSU:
    def __init__(self, n):
        self.parent = list(range(n))
        self.rank = [0] * n
    
    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
    
    def union(self, x, y):
        px, py = self.find(x), self.find(y)
        if px == py:
            return False
        if self.rank[px] < self.rank[py]:
            px, py = py, px
        self.parent[py] = px
        if self.rank[px] == self.rank[py]:
            self.rank[px] += 1
        return True

# ==================== DEBUGGING ====================
def debug(*args, **kwargs):
    print("[DEBUG]", *args, **kwargs, file=sys.stderr)

# ==================== SOLUTION ====================
def solve():
    n = read_int()
    arr = read_list()
    if sum(arr)%2!=0:
        print("NO")
    else:
        print("YES")
    

def main():
    setup_io()
    t = read_int()  # Change to 1 for single test case
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()