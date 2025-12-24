// Topic: Boundary Elements
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = A.size(), m = A[0].size();
    for (int j = 0; j < m; ++j) cout << A[0][j] << " ";
    for (int i = 1; i < n - 1; ++i) cout << A[i][m - 1] << " ";
    if (n > 1)
        for (int j = m - 1; j >= 0; --j) cout << A[n - 1][j] << " ";
    for (int i = n - 2; i >= 1; --i) cout << A[i][0] << " ";
    cout << "\n";
}

// TC: O(n*m)
// SC: O(1)
