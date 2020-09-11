n = 0
m = 9
while n < 4:
    i = 0
    while i < n:
        i = i + 1
        print('  ', end='')
    k = 0
    while k < m:
        k = k + 1
        print('*', end=' ')

    m = m - 2
    n = n + 1
    print()
n = 5
m = 1
while n > 0:
    i = 1
    while i < n:
        i = i + 1
        print('  ', end='')
    k = 0
    while k < m:
        k = k + 1
        print('*', end=' ')

    print()
    m = m + 2
    n = n - 1