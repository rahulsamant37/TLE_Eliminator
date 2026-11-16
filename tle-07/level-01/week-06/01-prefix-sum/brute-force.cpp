#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

template<typename T>
void show_all(std::string_view rem, const T& v)
{
    std::cout << rem << ": ";
    for (const auto& e : v)
        std::cout << e << ' ';
    std::cout << '\n';
}

int main() {
    int n; cin >>n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int prefix[n];
    for (int i = 0; i < n; ++i) {
        prefix[i] = 0;
        for (int j = 0; j <= i; ++j) {
            prefix[i] += arr[j];
        }
    }
    for (int i: prefix) {
        cout << i << " ";
    }
    return 0;
}
