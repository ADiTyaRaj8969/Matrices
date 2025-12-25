"""Topic: Set Matrix Zeroes"""
def set_zeroes(A):
    n=len(A); m=len(A[0])
    rows=[False]*n; cols=[False]*m
    for i in range(n):
        for j in range(m):
            if A[i][j]==0: rows[i]=True; cols[j]=True
    for i in range(n):
        for j in range(m):
            if rows[i] or cols[j]: A[i][j]=0
    return A

if __name__=='__main__':
    A=[[1,0,3],[4,5,6],[7,8,0]]
    for r in set_zeroes(A): print(' '.join(map(str,r)))

# TC: O(n*m)
# SC: O(n+m)
