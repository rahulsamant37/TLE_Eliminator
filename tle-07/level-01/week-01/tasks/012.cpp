/*
Author: Baldy Cape
Created: 2026-01-11 15:09:24
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

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve() {
    int n, m, ans;
    char sign, eq;
    cin >> n >> sign >> m >> eq >> ans;
    if (sign == '+') {
        if (n+m==ans) {
            cout << "Yes" << endl;
        } else {
            cout << n+m << endl;
        }
    } else if (sign == '-') {
        if (n-m==ans) {
            cout << "Yes" << endl;
        } else {
            cout << n-m << endl;
        }
    } else {
        if (n*m == ans) {
            cout << "Yes" << endl;
        } else {
            cout << n*m << endl;
        }
    }
}

int main() {
    setup_io();
    solve();
}