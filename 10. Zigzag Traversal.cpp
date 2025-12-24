// Topic: Zigzag Traversal (row-wise)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < A.size(); ++i)
    {
        if (i % 2 == 0)
            for (auto v : A[i]) cout << v << " ";
        else
            for (int j = A[i].size() - 1; j >= 0; --j) cout << A[i][j] << " ";
    }
    cout << "\n";
}

// TC: O(n*m)
// SC: O(1)
