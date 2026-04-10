    /*
    Author: Baldy Cape
    Created: 2026-01-11 14:55:52
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
        int n, m, o, p;
        cin >> n >> m >> o >> p;
        long long ans = 1;
        ans = (ans * (n % 100)) % 100;
        ans = (ans * (m % 100)) % 100;
        ans = (ans * (o % 100)) % 100;
        ans = (ans * (p % 100)) % 100;
        cout << setw(2) << setfill('0') << ans << endl;
    }

    int main() {
        setup_io();
        solve();
    }