"""Topic: Wave Traversal"""
def wave(A):
    n=len(A); m=len(A[0])
    out=[]
    for j in range(m):
        if j%2==0:
            for i in range(n): out.append(A[i][j])
        else:
            for i in range(n-1,-1,-1): out.append(A[i][j])
    return out

if __name__=='__main__':
    A=[[1,2,3],[4,5,6],[7,8,9]]
    print(*wave(A))

# TC: O(n*m)
# SC: O(n*m)
