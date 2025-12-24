"""Topic: Matrix Transpose"""
def transpose(A):
    return list(map(list, zip(*A)))

if __name__=='__main__':
    A=[[1,2,3],[4,5,6]]
    print('Transpose:')
    for r in transpose(A): print(' '.join(map(str,r)))

# TC: O(n*m)
# SC: O(n*m)
