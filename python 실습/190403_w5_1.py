data=0
def add(a,b):
    global data
    data=a+b
def sub(a,b):
    global data
    data=a-b
def mul(a,b):
    global data
    data=a*b
def div(a,b):
    global data
    data=a/b
def main():
    print('first operand is 0')
    while True:
        print('operator(+,-,*,/,exit)')
        operator=input('  >>')
        while operator!='+'and operator!='-' and operator!='*' and operator!='/'and operator!='exit':
            print('wrong input')
            operator=input()
        if operator=='exit':
            break
        print('operand')
        operand=float(input('  >>'))
        if operator=='+':
            add(data,operand)
        elif operator=='-':
            sub(data,operand)
        elif operator=='*':
            mul(data,operand)
        else:
            div(data,operand)
        print('result')
        print('----------------------')
        print('>>>',float(data))
    print('Terminate')
if __name__== '__main__':
        main()
