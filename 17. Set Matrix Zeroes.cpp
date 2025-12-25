// Topic: Set Matrix Zeroes
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 0, 3}, {4, 5, 6}, {7, 8, 0}};
    int n = A.size(), m = A[0].size();
    vector<bool> row(n, false), col(m, false);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (A[i][j] == 0)
            {
                row[i] = true;
                col[j] = true;
            }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (row[i] || col[j])
                A[i][j] = 0;
    for (auto& r : A)
    {
        for (auto v : r) cout << v << " ";
        cout << "\n";
    }
}

// TC: O(n*m)
// SC: O(n+m)
