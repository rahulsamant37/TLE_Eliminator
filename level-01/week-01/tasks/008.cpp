/*
Author: Baldy Cape
Created: 2026-01-10 11:39:56
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
    int A, B, C;
    cin >> A >> B >> C;
    if (A < B) {
        if (A < C) {
            if (B < C) {
                cout << A << " " << C << endl;
            } else {
                cout << A << " " << B << endl;
            }
        } else {
            cout << C << " " << B << endl;
        }
    } else {
        if (B < C) {
            if (A < C) {
                cout << B << " " << C << endl;
            } else {
                cout << B << " " << A << endl;
            }
        } else {
            cout << C << " " << A << endl;
        }
    }
}

int main() {
    setup_io();
    solve();
}