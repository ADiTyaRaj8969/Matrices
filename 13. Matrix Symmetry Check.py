"""Topic: Matrix Symmetry Check"""
def is_symmetric(A):
    n=len(A)
    for i in range(n):
        for j in range(i+1,n):
            if A[i][j]!=A[j][i]: return False
    return True

if __name__=='__main__':
    A=[[1,2,3],[2,5,6],[3,6,9]]
    print(is_symmetric(A))

# TC: O(n^2)
# SC: O(1)
