import random

computer = random.randint(0, 2)
playagain = True
while playagain == True:
    print('rock,scissors,paper')
    user = input()
    if user == 'rock':
        if computer == 0:
            print('You Lose!')
        elif computer == 1:
            print('You Lose!')
        else:
            print('You win!')
    elif user == 'paper':
        if computer == 0:
            print('You win!')
        elif computer == 1:
            print('You Lose!')
        else:
            print('You Lose!')
    else:
        if computer == 0:
            print('You Lose!')
        elif computer == 1:
            print('You win!')
        else:
            print('You Lose!')
    print('Do you want to play again?')
    playagain = input()
    if playagain != 'yes':
        playagain = False

