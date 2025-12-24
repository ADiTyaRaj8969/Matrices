// Topic: Matrix Multiplication (naive)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}};       // 2x3
    vector<vector<int>> B = {{7, 8}, {9, 10}, {11, 12}};  // 3x2
    int n = A.size(), k = A[0].size(), m = B[0].size();
    vector<vector<int>> C(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            for (int t = 0; t < k; ++t) C[i][j] += A[i][t] * B[t][j];
    cout << "Product:\n";
    for (auto& r : C)
    {
        for (auto v : r) cout << v << " ";
        cout << "\n";
    }
}

// TC: O(n*k*m)
// SC: O(n*m)
