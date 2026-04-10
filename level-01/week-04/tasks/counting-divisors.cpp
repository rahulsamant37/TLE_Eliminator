/*
Author: Rahul Samant
Created: 2026-03-21 22:57:06
*/

#include <bits/stdc++.h>
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
const int MAXN = 1e6 + 5;
int divisors[MAXN]; 

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


void precompute() {
    for (int i = 1; i < MAXN; i++) {
        for (int j = i; j < MAXN; j += i) {
            divisors[j]++;
        }
    }
}

void solve() {
    ll n;
    cin >> n;
    cout << divisors[n] << '\n';
}

int main() {
    setup_io();
    precompute();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}