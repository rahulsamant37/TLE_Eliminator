/*
Author: Rahul Samant
Created: 2026-07-13 18:57:02
*/

#include <bits/stdc++.h>
#include <iostream>
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
    int n, x;
    cin >> n >> x;
    vi arr(n);
    rep(i, 0, n){ 
        cin>>arr[i];
    }
    int max_dis = arr[0];
    rep(i, 1, n){ 
        max_dis=max(max_dis, arr[i]-arr[i-1]);
    }
    max_dis = max(max_dis, 2*(x-arr[n-1]));
    cout << max_dis << endl;
}

int main() {
    setup_io();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
