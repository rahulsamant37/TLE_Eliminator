#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define br '\n'

int main() {
    vector<int> arr = {1, 2, 5, 7, 11};
    cout << "Normal Binary Search" << endl;
    bool is_present = binary_search(arr.begin(), arr.begin(), 5);
    cout << is_present;
    br;
    br;
    cout << "Now testing lower-bound\n";
    auto it = lower_bound(arr.begin(), arr.end(), 5);
    cout << *it << " present at " << &it << endl;
    cout << "now let's see how to access index" << endl;
    auto index = it - arr.begin();
    cout << index << endl; 
    return 0;
}
