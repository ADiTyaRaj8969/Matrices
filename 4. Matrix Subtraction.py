"""Topic: Matrix Subtraction"""
def sub(A,B):
    return [[a-b for a,b in zip(ra,rb)] for ra,rb in zip(A,B)]

if __name__=='__main__':
    A=[[5,6],[7,8]]
    B=[[1,2],[3,4]]
    print('Diff:')
    for r in sub(A,B): print(' '.join(map(str,r)))

# TC: O(n*m)
# SC: O(n*m)
