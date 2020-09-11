n=int(input())
m=1
while m<=n:
    if m==1:
        k=0
        while k<2*(n-m):
            print(' ',end='')
            k=k+1
        print('*')
        m=m+1
    if m==n:
        l=1
        while l<2*m:
            print("*",end=' ')
            l=l+1
        break
    if m!=1 and m!=n:
        k=0
        while k<2*(n-m):
            print(' ',end='')
            k=k+1
        l=1
        print("*",end='')
        while l<4*(m-1):
            print(' ',end='')
            l=l+1
        print('*')
        m=m+1