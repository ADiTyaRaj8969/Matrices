"""Topic: Diagonal Sum"""
def diagonal_sums(A):
    n=len(A)
    primary=sum(A[i][i] for i in range(n))
    secondary=sum(A[i][n-1-i] for i in range(n))
    return primary, secondary

if __name__=='__main__':
    A=[[1,2,3],[4,5,6],[7,8,9]]
    print(diagonal_sums(A))

# TC: O(n)
# SC: O(1)
