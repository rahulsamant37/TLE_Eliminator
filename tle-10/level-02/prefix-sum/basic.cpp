#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

vector<int> preSum(const vector<int>& arr, int n) {
    vector<int> pre(n);
    pre[0] = arr[0];
    for (int i = 1; i < n; i++) {
        pre[i] = arr[i]+pre[i-1];
    }
    return pre;
}

int main() {
    // without prefix-sum
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &it:arr) cin >> it;
    int q = 1;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int i = l; i <= r; i++) {
            sum+=arr[i];
        }
        cout << sum << " ";
    }
    cout << endl;

    // with prefix-sum
    vector<int> prefixSum = preSum(arr, n);
    q = 1;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int sumpre = (l == 0) ? prefixSum[r] : prefixSum[r] - prefixSum[l-1];
        cout << sumpre << " ";
    }
    
    return 0;
}
