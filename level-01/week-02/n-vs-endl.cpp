#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Using endl
    cout << "Using endl:" << endl;
    cout << "Enter two numbers: " << endl;
    int a, b;
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;

    cout << "Enter third number: " <<endl;
    int c;
    cin >> c;
    cout << "Total = " << a + b + c << endl;

    cout << "\n----------------------\n\n" << endl;

    // Using '\n'
    cout << "Using \\n:\n" << endl;
    cout << "Enter two numbers: ";
    int x, y;
    cin >> x >> y;
    cout << "Sum = " << x + y << '\n';

    cout << "Enter third number: ";
    int z;
    cin >> z;
    cout << "Total = " << x + y + z << '\n';

    return 0;
}
