/*
Author: Rahul Samant
Created: 2026-04-11 04:26:00
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
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
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

int gr(int a, int b) { return (a > b) ? a : b; }

void solve() {
    vi arr(4);
    rep(i, 0, 4) cin >> arr[i];
    vi sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());
    int a = gr(arr[0], arr[1]);
    int b = gr(arr[2], arr[3]);
    if ((a == sorted_arr[2] || a == sorted_arr[3]) &&
        (b == sorted_arr[2] || b == sorted_arr[3])) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}

int main() {
    setup_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
