def printLine(n):
    m=1
    while m<=n:
        for i in range(m):
            print(i+1,end='')
        print()
        m=m+1
    m=n
    while m>=1:
        for i in range(m):
            print(i+1,end='')
        print()
        m=m-1
a=int(input())
printLine(a)