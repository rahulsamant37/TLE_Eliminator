#include <bits/stdc++.h>
using namespace std;

int main() {
    // Statement 1 is executed (one time) before the execution of the code block.
    // Statement 2 defines the condition for executing the code block.
    // Statement 3 is executed (every time) after the code block has been executed.
    // for (statement 1; statement 2; statement 3) {
    //     // code block to be executed
    // }

    // for (int i=1; i<=10; i++) {
    //     cout << i << '\n';
    // }
    int n;
    cin >> n;
    int a[n] = {};
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout << "This is normal for loop" <<'\n';
    for (int i=0;i<n;i++) {
        cout << a[i] <<' ';
    }
    cout << "This is auto for loop" <<'\n';
    for (auto i: a) {
        cout << i << " ";
    }
}