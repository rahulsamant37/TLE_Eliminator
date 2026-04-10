#include <bits/stdc++.h>

using namespace std;

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    setup_io();

    string s;
    cin >> s;   // read the number as a string

    map<char, int> counter;
    for (char c : s) {
        counter[c]++;
    }

    for (const auto& p : counter) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}
