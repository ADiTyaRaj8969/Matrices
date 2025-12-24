// Topic: Matrix Addition
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2}, {3, 4}};
    vector<vector<int>> B = {{5, 6}, {7, 8}};
    int n = A.size(), m = A[0].size();
    vector<vector<int>> C(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) C[i][j] = A[i][j] + B[i][j];
    cout << "Sum:\n";
    for (auto& r : C)
    {
        for (auto v : r) cout << v << " ";
        cout << "\n";
    }
}

// TC: O(n*m)
// SC: O(n*m)
