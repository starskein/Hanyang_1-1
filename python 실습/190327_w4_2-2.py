import random
n=random.randint(0,100)
def comp(a,b):
    if a>b:
        return 1
    if a<b:
        return -1
    if a==b:
        return 0
print('Number=?')
m=int(input())
while comp(n,m)!=0:
    if comp(n,m)==1:
        print('Larger than %d' %(m))
    if comp(n,m)==-1:
        print('Smaller than %d' %(m))
    print('Number=?')
    m=int(input())
print('Yes. Right.')