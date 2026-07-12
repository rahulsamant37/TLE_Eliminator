/*
Author: Rahul Samant
Created: 2026-07-11 17:39:56
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

int main() {
    setup_io();
    ll l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    ll starting = max(l1,l2);
    ll ending = min(r1,r2);
    if (l1 > r2 || r1 < l2) {
        cout << -1;
        return 0;
    }
    cout << starting << " " << ending;
    return 0;
}
