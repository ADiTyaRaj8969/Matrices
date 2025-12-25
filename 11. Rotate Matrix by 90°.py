"""Topic: Rotate Matrix by 90 degrees clockwise (in-place)"""
def rotate90(A):
    n=len(A)
    for i in range(n):
        for j in range(i,n):
            A[i][j],A[j][i]=A[j][i],A[i][j]
    for i in range(n): A[i].reverse()

if __name__=='__main__':
    A=[[1,2,3],[4,5,6],[7,8,9]]
    rotate90(A)
    for r in A: print(' '.join(map(str,r)))

# TC: O(n^2)
# SC: O(1)
