// Topic: Search in row & column-wise sorted matrix (staircase search)
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(const vector<vector<int>>& A, int target)
{
    if (A.empty() || A[0].empty())
        return false;
    int n = A.size(), m = A[0].size();
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (A[i][j] == target)
            return true;
        if (A[i][j] > target)
            --j;
        else
            ++i;
    }
    return false;
}
int main()
{
    vector<vector<int>> A = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}};
    cout << boolalpha << searchMatrix(A, 8) << "\n";  // true
}

// TC: O(n+m)
// SC: O(1)
