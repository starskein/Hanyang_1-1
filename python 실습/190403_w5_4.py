n=int(input())
k=list(range(1,n*n+1))
m=[]
for i in range(n):
    m.append([])
for i in range(n):
    for j in range(n):
        m[i].append(0)
for y in range(n):
    for x in range(n):
        p=min(x,y,n-x-1,n-y-1)
        if x>=y:
            m[y][x]=x+y-2*p+1
        else:
            m[y][x]=(n-1-2*p)*4-(x+y-2*p)+1
        m[y][x] += 4*(p*n-p*p)
for i in range(n):
    for j in range(n):
        print(m[i][j],end='\t')
    print()