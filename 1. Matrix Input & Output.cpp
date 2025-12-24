// Topic: Matrix Input & Output
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 3, m = 3;
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Matrix:\n";
    for (auto& r : A)
    {
        for (auto v : r) cout << setw(4) << v;
        cout << "\n";
    }
    return 0;
}

// TC: O(n*m)
// SC: O(1) extra
