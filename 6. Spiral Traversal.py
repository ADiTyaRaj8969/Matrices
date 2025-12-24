"""Topic: Spiral Traversal"""
def spiral(A):
    top,left=0,0
    bottom=len(A)-1; right=len(A[0])-1
    out=[]
    while top<=bottom and left<=right:
        for j in range(left,right+1): out.append(A[top][j])
        top+=1
        for i in range(top,bottom+1): out.append(A[i][right])
        right-=1
        if top<=bottom:
            for j in range(right,left-1,-1): out.append(A[bottom][j])
            bottom-=1
        if left<=right:
            for i in range(bottom,top-1,-1): out.append(A[i][left])
            left+=1
    return out

if __name__=='__main__':
    A=[[1,2,3],[4,5,6],[7,8,9]]
    print(*spiral(A))

# TC: O(n*m)
# SC: O(n*m) output
