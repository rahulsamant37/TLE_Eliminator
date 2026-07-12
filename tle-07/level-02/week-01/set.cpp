#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    set<int> st = {1, 2, 3, 4, 5};
    for(auto it = st.begin(); it!=st.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}
