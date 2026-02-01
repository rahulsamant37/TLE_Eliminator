/*
Author: Baldy Cape
Created: 2026-01-11 15:20:43
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


void solve() {
    string s;
    cin >> s;

    // Check if there's a decimal point
    size_t pos = s.find('.');
    if (pos == string::npos) {
        // No decimal point => integer
        cout << "int " << s << "\n";
    } else {
        // Split integer and fractional parts
        string ip = s.substr(0, pos);
        string fp = s.substr(pos + 1);

        // Check if fractional part is all zeroes
        bool allZero = true;
        for (char c : fp) {
            if (c != '0') {
                allZero = false;
                break;
            }
        }

        if (allZero) {
            // It's effectively an integer
            cout << "int " << ip << "\n";
        } else {
            // It's a float
            cout << "float " << ip << " 0." << fp << "\n";
        }
    }
}

int main() {
    setup_io();
    solve();
}