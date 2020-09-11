import time
for i in range(0,200):
    print('*',end='')
print(time.time())
s=''
for i in range(0,200):
    s+= '*'
print(s)
print(time.time())