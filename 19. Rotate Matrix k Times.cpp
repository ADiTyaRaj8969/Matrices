// Topic: Rotate matrix elements k times in circular fashion (on flattened array)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = A.size(), m = A[0].size();
    int k = 2;
    vector<int> flat;
    for (auto& r : A)
        for (auto v : r) flat.push_back(v);
    int len = flat.size();
    k %= len;
    if (k < 0)
        k += len;
    rotate(flat.begin(), flat.end() - k, flat.end());
    vector<vector<int>> B(n, vector<int>(m));
    for (int i = 0, idx = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) B[i][j] = flat[idx++];
    for (auto& r : B)
    {
        for (auto v : r) cout << v << " ";
        cout << "\n";
    }
}

// TC: O(n*m)
// SC: O(n*m)
