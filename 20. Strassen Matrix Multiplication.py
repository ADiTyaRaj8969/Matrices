"""Topic: Strassen Matrix Multiplication (educational)"""
def add(A,B): return [[A[i][j]+B[i][j] for j in range(len(A))] for i in range(len(A))]
def sub(A,B): return [[A[i][j]-B[i][j] for j in range(len(A))] for i in range(len(A))]
def strassen(A,B):
    n=len(A)
    if n==1: return [[A[0][0]*B[0][0]]]
    k=n//2
    A11=[row[:k] for row in A[:k]]; A12=[row[k:] for row in A[:k]]
    A21=[row[:k] for row in A[k:]]; A22=[row[k:] for row in A[k:]]
    B11=[row[:k] for row in B[:k]]; B12=[row[k:] for row in B[:k]]
    B21=[row[:k] for row in B[k:]]; B22=[row[k:] for row in B[k:]]
    M1=strassen(add(A11,A22), add(B11,B22))
    M2=strassen(add(A21,A22), B11)
    M3=strassen(A11, sub(B12,B22))
    M4=strassen(A22, sub(B21,B11))
    M5=strassen(add(A11,A12), B22)
    M6=strassen(sub(A21,A11), add(B11,B12))
    M7=strassen(sub(A12,A22), add(B21,B22))
    C11=add(sub(add(M1,M4),M5),M7)
    C12=add(M3,M5)
    C21=add(M2,M4)
    C22=add(sub(add(M1,M3),M2),M6)
    C=[[0]*n for _ in range(n)]
    for i in range(k):
        for j in range(k):
            C[i][j]=C11[i][j]; C[i][j+k]=C12[i][j]
            C[i+k][j]=C21[i][j]; C[i+k][j+k]=C22[i][j]
    return C

if __name__=='__main__':
    A=[ [i for i in range(1,5)], [i for i in range(5,9)], [i for i in range(9,13)], [i for i in range(13,17)] ]
    C=strassen(A,A)
    for r in C: print(' '.join(map(str,r)))

# TC: ~O(n^{2.807})
# SC: O(n^2)
