// Topic: Spiral Traversal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int top = 0, left = 0, bottom = A.size() - 1, right = A[0].size() - 1;
    vector<int> out;
    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; ++j) out.push_back(A[top][j]);
        ++top;
        for (int i = top; i <= bottom; ++i) out.push_back(A[i][right]);
        --right;
        if (top <= bottom)
        {
            for (int j = right; j >= left; --j) out.push_back(A[bottom][j]);
            --bottom;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; --i) out.push_back(A[i][left]);
            ++left;
        }
    }
    for (auto v : out) cout << v << " ";
    cout << "\n";
}

// TC: O(n*m)
// SC: O(1) extra (output excluded)
