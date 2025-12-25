"""Topic: Row with Maximum 1s"""
def row_with_max_ones(A):
    n=len(A); m=len(A[0])
    j=m-1; best=-1
    for i in range(n):
        while j>=0 and A[i][j]==1: j-=1
        if m-1-j > ( -1 if best==-1 else m-1-best): best=i
    return best

if __name__=='__main__':
    A=[[0,0,1,1],[0,1,1,1],[0,0,0,1]]
    print(row_with_max_ones(A))

# TC: O(n+m)
# SC: O(1)
