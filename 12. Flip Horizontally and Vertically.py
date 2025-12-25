"""Topic: Flip Horizontally and Vertically"""
def flip_horizontal(A):
    return [list(reversed(r)) for r in A]
def flip_vertical(A):
    return list(reversed(A))

if __name__=='__main__':
    A=[[1,2,3],[4,5,6],[7,8,9]]
    print('Horizontal:')
    for r in flip_horizontal(A): print(' '.join(map(str,r)))
    print('Vertical:')
    for r in flip_vertical(A): print(' '.join(map(str,r)))

# TC: O(n*m)
# SC: O(n*m)
