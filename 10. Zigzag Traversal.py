"""Topic: Zigzag Traversal"""
def zigzag(A):
    out=[]
    for i,row in enumerate(A):
        if i%2==0: out.extend(row)
        else: out.extend(reversed(row))
    return out

if __name__=='__main__':
    A=[[1,2,3],[4,5,6],[7,8,9]]
    print(*zigzag(A))

# TC: O(n*m)
# SC: O(n*m)
