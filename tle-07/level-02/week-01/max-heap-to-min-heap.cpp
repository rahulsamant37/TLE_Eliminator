#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    int n = 4;
    priority_queue<pair<int, int>> pq;
    for(int i = 1; i<=n; i++) {
        int a, b;
        cin >> a >> b;
        // you can change a abnd b both to -ve 
        // it will be in ascending order accordingly
        // but make sure to change in output also
        pq.push({-a, b});
    }
    cout << "------------------------------------------";
    cout << endl;
    while(pq.empty()==false) {
        cout << -pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}
