"""Topic: Boundary Elements"""
def boundary(A):
    n=len(A); m=len(A[0])
    out=[]
    out.extend(A[0])
    for i in range(1,n-1): out.append(A[i][m-1])
    if n>1: out.extend(reversed(A[n-1]))
    for i in range(n-2,0,-1): out.append(A[i][0])
    return out

if __name__=='__main__':
    A=[[1,2,3],[4,5,6],[7,8,9]]
    print(*boundary(A))

# TC: O(n*m)
# SC: O(n+m)
