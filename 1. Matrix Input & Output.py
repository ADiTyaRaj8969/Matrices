"""Topic: Matrix Input & Output
"""
def print_matrix(A):
    for row in A:
        print(' '.join(f"{v:4}" for v in row))

if __name__ == '__main__':
    A = [[1,2,3],[4,5,6],[7,8,9]]
    print("Matrix:")
    print_matrix(A)

# TC: O(n*m)
# SC: O(1) extra
