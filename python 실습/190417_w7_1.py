import random

playagain=True
real=random.sample(range(0,10),3)
cnt=0
print("S T A R T")
print("=====================================")
while playagain==True:
    print("Guess numbers (000 ~ 999)")
    guess=input()
    a=int(guess[0])
    b=int(guess[1])
    c=int(guess[2])
    while a==b or b==c or c==a:
        print('Abnormal input')
        guess=input()
        a=int(guess[0])
        b=int(guess[1])
        c=int(guess[2])
    strike=0
    ball=0
    for i in range(0,3):
        for j in range(0,3):
            if real[i]==int(guess[j]):
                if i==j:
                    strike=strike+1
                else:
                    ball=ball+1
    if strike == 3:
        print('Yes! THe secret number is "%s"! You have won'%(str(real[0])+str(real[1])+str(real[2])))
        m=input("Do you want to play again?(yes or no)")
        if m=='yes':
            playagain=True
            real=random.sample(range(0,10),3)
            cnt=0
        else:
            playagain=False
    else:
        print( str(strike) + "strike,"  + str(ball) + "ball." )
        cnt=cnt+1
        print("=================================")