// Topic: Diagonal Sum
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = A.size();
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i)
    {
        sum1 += A[i][i];
        sum2 += A[i][n - 1 - i];
    }
    cout << "Primary: " << sum1 << " Secondary: " << sum2 << "\n";
}

// TC: O(n)
// SC: O(1)
