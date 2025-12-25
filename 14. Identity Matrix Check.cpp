// Topic: Identity Matrix Check
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int n = A.size();
    bool ok = true;
    for (int i = 0; i < n && ok; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (A[i][j] != 1)
                {
                    ok = false;
                    break;
                }
            }
            else if (A[i][j] != 0)
            {
                ok = false;
                break;
            }
        }
    cout << (ok ? "Identity\n" : "Not Identity\n");
}

// TC: O(n^2)
// SC: O(1)
