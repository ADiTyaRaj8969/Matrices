// Topic: Strassen's Matrix Multiplication (recursive, for square matrices, power of 2)
// Note: simple educational implementation; for production use highly optimized BLAS/LAPACK.
#include <bits/stdc++.h>
using namespace std;
using Mat = vector<vector<int>>;
Mat add(const Mat& A, const Mat& B)
{
    int n = A.size();
    Mat C(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) C[i][j] = A[i][j] + B[i][j];
    return C;
}
Mat sub(const Mat& A, const Mat& B)
{
    int n = A.size();
    Mat C(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) C[i][j] = A[i][j] - B[i][j];
    return C;
}
Mat strassen(const Mat& A, const Mat& B)
{
    int n = A.size();
    if (n == 1)
        return Mat{{A[0][0] * B[0][0]}};
    int k = n / 2;
    Mat A11(k, vector<int>(k)), A12(k, vector<int>(k)), A21(k, vector<int>(k)),
        A22(k, vector<int>(k));
    Mat B11 = A11, B12 = A12, B21 = A21, B22 = A22;
    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++)
        {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + k];
            A21[i][j] = A[i + k][j];
            A22[i][j] = A[i + k][j + k];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + k];
            B21[i][j] = B[i + k][j];
            B22[i][j] = B[i + k][j + k];
        }
    Mat M1 = strassen(add(A11, A22), add(B11, B22));
    Mat M2 = strassen(add(A21, A22), B11);
    Mat M3 = strassen(A11, sub(B12, B22));
    Mat M4 = strassen(A22, sub(B21, B11));
    Mat M5 = strassen(add(A11, A12), B22);
    Mat M6 = strassen(sub(A21, A11), add(B11, B12));
    Mat M7 = strassen(sub(A12, A22), add(B21, B22));
    Mat C(n, vector<int>(n));
    Mat C11 = add(sub(add(M1, M4), M5), M7);
    Mat C12 = add(M3, M5);
    Mat C21 = add(M2, M4);
    Mat C22 = add(sub(add(M1, M3), M2), M6);
    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++)
        {
            C[i][j] = C11[i][j];
            C[i][j + k] = C12[i][j];
            C[i + k][j] = C21[i][j];
            C[i + k][j + k] = C22[i][j];
        }
    return C;
}
int main()
{
    Mat A = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    Mat B = A;
    Mat C = strassen(A, B);
    for (auto& r : C)
    {
        for (auto v : r) cout << v << " ";
        cout << "\n";
    }
}

// TC: approx O(n^{log2(7)})
// SC: O(n^2)
