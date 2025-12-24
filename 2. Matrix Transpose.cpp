// Topic: Matrix Transpose
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}};  // 2x3
    int n = A.size(), m = A[0].size();
    vector<vector<int>> T(m, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) T[j][i] = A[i][j];
    cout << "Transpose:\n";
    for (auto& r : T)
    {
        for (auto v : r) cout << v << " ";
        cout << "\n";
    }
}

// TC: O(n*m)
// SC: O(n*m)
