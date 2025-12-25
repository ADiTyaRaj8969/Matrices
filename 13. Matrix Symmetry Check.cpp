// Topic: Matrix Symmetry Check
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {2, 5, 6}, {3, 6, 9}};
    int n = A.size();
    bool sym = true;
    for (int i = 0; i < n && sym; i++)
        for (int j = i + 1; j < n; j++)
            if (A[i][j] != A[j][i])
            {
                sym = false;
                break;
            }
    cout << (sym ? "Symmetric\n" : "Not symmetric\n");
}

// TC: O(n^2)
// SC: O(1)
