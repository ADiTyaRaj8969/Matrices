// Topic: Row with Maximum 1s (binary matrix rows sorted)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{0, 0, 1, 1}, {0, 1, 1, 1}, {0, 0, 0, 1}};
    int n = A.size(), m = A[0].size();
    int best = -1, j = m - 1;
    for (int i = 0; i < n; ++i)
    {
        while (j >= 0 && A[i][j] == 1) --j;
        if (m - 1 - j > (best == -1 ? -1 : m - 1 - best))
            best = i;
    }
    cout << "Row with max 1s: " << best << "\n";
}

// TC: O(n+m)
// SC: O(1)
