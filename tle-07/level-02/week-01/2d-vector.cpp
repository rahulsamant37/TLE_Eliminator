#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    // Empty matrix
    vector<vector<int>> matrix;
    // pre-define matrix
    vector<vector<int>> mat(3, vector<int>(3,0));
    for (size_t i = 0; i < mat.size(); i++) {
        for (size_t j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
