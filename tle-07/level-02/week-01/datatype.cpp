#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    int a = 10; // have a range of 10^-9 to 10^9
    long long b = 1e12; // have a range of 10^-18 to 10^18
    // and if we have number greater than this range then we use % MOD
    const int MOD = 1e9 + 7;
    cout << a << b << MOD;
    return 0;
}
