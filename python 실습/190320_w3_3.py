import random
import time
print('******* START *******')
for i in range(3):
    n=random.randint(0,9)
    m=random.randint(0,9)
    print('%d * %d = ?' %(n,m))
    answer=int(input())
    if answer == n*m:
        print("Correct Answer")
    if answer!= n*m:
        print("Wrong Answer,",end=' ')
        time.sleep(5)
        print('%d * %d = %d' %(n,m,n*m))