// Topic: Rotate Matrix by 90 degrees clockwise (in-place) - square matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  // 3x3
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) swap(A[i][j], A[j][i]);
    }
    for (int i = 0; i < n; i++) reverse(A[i].begin(), A[i].end());
    for (auto& r : A)
    {
        for (auto v : r) cout << v << " ";
        cout << "\n";
    }
}

// TC: O(n^2)
// SC: O(1)
