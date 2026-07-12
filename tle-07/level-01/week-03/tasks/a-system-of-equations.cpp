/*
Author: Rahul Samant
Created: 2026-04-11 06:43:14
*/

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define endl '\n'

#ifdef LOCAL
#define debug(x) cerr << "[DEBUG] " << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

bool isPerfectSquare(int x) {
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

int main() {
    setup_io();
    int n, m;
    cin >> n >> m;
    int a, b, cnt = 0;
    for (int i = 0; i<=1000; i++) {
        b = i;
        a = (n-b);
        if (isPerfectSquare(a)) {
            int chk = sqrt(a) + (b*b);
            if (chk == m) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
