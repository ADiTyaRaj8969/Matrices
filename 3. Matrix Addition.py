"""Topic: Matrix Addition"""
def add(A,B):
    return [[a+b for a,b in zip(ra,rb)] for ra,rb in zip(A,B)]

if __name__=='__main__':
    A=[[1,2],[3,4]]
    B=[[5,6],[7,8]]
    print('Sum:')
    for r in add(A,B): print(' '.join(map(str,r)))

# TC: O(n*m)
# SC: O(n*m)
