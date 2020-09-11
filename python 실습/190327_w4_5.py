n=int(input())

line=2*n-1
def drawline(m):
    stars=0
    if m==line:
        print('*'*line)
        stars=stars+line
    else:
        for i in range(int(m/2)):
            print('*',end='')
            stars=stars+1
        for i in range(line-m):
            print(' ',end='')
        for i in range(int(m/2)):
            print('*',end='')
            stars=stars+1
        print()
l=n
k=line
while l>0:
    drawline(k)
    if k==line:
        k=k-1
    else:
        k=k-2
    l=l-1
l=2
k=4
while l<n+1:
    drawline(k)
    if k==line-1:
        k=k+1
    else:
        k=k+2
    l=l+1