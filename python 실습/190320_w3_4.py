import random
import time

print('******* START *******')
for i in range(5):
    a = random.randint(0, 9)
    b = random.randint(0, 9)
    c = random.randint(0, 9)
    d = random.randint(0, 9)
    print("%d * %d + %d - %d = ?" % (a, b, c, d))
    time.sleep(1)
    print('1,', end=' ')
    time.sleep(1)
    print('2,', end=' ')
    time.sleep(1)
    print('3, :', end=' ')
    answer = int(input())
    if answer == a * b + c - d:
        print("Correct Answer")
    if answer != a * b + c - d:
        print("Wrong Answer,", end=' ')

        print('%d * %d + %d - %d = %d' % (a, b, c, d, a * b + c - d))