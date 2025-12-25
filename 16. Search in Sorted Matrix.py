"""Topic: Search in row & column-wise sorted matrix"""
def search(A,target):
    if not A or not A[0]: return False
    n,m=len(A),len(A[0])
    i,j=0,m-1
    while i<n and j>=0:
        if A[i][j]==target: return True
        if A[i][j]>target: j-=1
        else: i+=1
    return False

if __name__=='__main__':
    A=[[1,4,7,11],[2,5,8,12],[3,6,9,16]]
    print(search(A,8))

# TC: O(n+m)
# SC: O(1)
