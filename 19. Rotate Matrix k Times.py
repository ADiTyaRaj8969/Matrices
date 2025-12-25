"""Topic: Rotate matrix elements k times (flattened)"""
from collections import deque
def rotate_k(A,k):
    flat=[v for r in A for v in r]
    k%=len(flat)
    dq=deque(flat)
    dq.rotate(k)
    it=iter(dq)
    n=len(A); m=len(A[0])
    B=[ [next(it) for _ in range(m)] for _ in range(n) ]
    return B

if __name__=='__main__':
    A=[[1,2,3],[4,5,6],[7,8,9]]
    for r in rotate_k(A,2): print(' '.join(map(str,r)))

# TC: O(n*m)
# SC: O(n*m)
