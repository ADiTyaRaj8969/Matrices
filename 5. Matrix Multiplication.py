"""Topic: Matrix Multiplication (naive)"""
def multiply(A,B):
    n=len(A); k=len(A[0]); m=len(B[0])
    C=[[0]*m for _ in range(n)]
    for i in range(n):
        for j in range(m):
            for t in range(k):
                C[i][j]+=A[i][t]*B[t][j]
    return C

if __name__=='__main__':
    A=[[1,2,3],[4,5,6]]
    B=[[7,8],[9,10],[11,12]]
    print('Product:')
    for r in multiply(A,B): print(' '.join(map(str,r)))

# TC: O(n*k*m)
# SC: O(n*m)
