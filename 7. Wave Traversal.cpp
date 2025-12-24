// Topic: Wave Traversal (column-wise up-down)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  // 3x3
    int n = A.size(), m = A[0].size();
    for (int j = 0; j < m; ++j)
    {
        if (j % 2 == 0)
            for (int i = 0; i < n; ++i) cout << A[i][j] << " ";
        else
            for (int i = n - 1; i >= 0; --i) cout << A[i][j] << " ";
    }
    cout << "\n";
}

// TC: O(n*m)
// SC: O(1)
