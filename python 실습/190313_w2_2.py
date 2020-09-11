# pyramid 1
n = 5
m = 1
while n > 0:
    for i in range(n - 1):
        print('  ', end='')
    n = n - 1
    k = 0
    while k < m:
        print('*', end=' ')
        k = k + 1
    print("")
    m = m + 2
