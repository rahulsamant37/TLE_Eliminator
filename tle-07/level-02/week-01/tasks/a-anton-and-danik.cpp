/*
Author: Rahul Samant
Created: 2026-07-11 09:10:45
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
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll A_win=0, D_win=0;
    for(char ch: str) {
        if (ch=='A'){
            A_win++;
        } else {
            D_win++;
        }
    }
    if(A_win>D_win) {
        cout << "Anton";
    } else if (D_win>A_win) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
    return 0;
} 
