"""Topic: Identity Matrix Check"""
def is_identity(A):
    n=len(A)
    for i in range(n):
        for j in range(n):
            if i==j and A[i][j]!=1: return False
            if i!=j and A[i][j]!=0: return False
    return True

if __name__=='__main__':
    A=[[1,0,0],[0,1,0],[0,0,1]]
    print(is_identity(A))

# TC: O(n^2)
# SC: O(1)
