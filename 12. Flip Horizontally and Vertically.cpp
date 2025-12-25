// Topic: Flip Horizontally and Vertically
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // horizontal flip (reverse each row)
    auto H = A;
    for (auto& r : H) reverse(r.begin(), r.end());
    // vertical flip (reverse row order)
    auto V = A;
    reverse(V.begin(), V.end());
    cout << "Horizontal:\n";
    for (auto& r : H)
    {
        for (auto v : r) cout << v << " ";
        cout << "\n";
    }
    cout << "Vertical:\n";
    for (auto& r : V)
    {
        for (auto v : r) cout << v << " ";
        cout << "\n";
    }
}

// TC: O(n*m)
// SC: O(n*m)
