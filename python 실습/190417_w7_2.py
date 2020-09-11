def check(arr):
    three=arr.count('3')
    six=arr.count('6')
    nine=arr.count('9')
    return three+six+nine
def main():
    print('Please input the last number')
    n=int(input())
    print("--------- start ---------")
    k=1
    while k<=n:
        str_k=str(k)
        if check(str_k)==0:
            print(k)
        else:
            for i in range(check(str_k)):
                print('clap',end=' ')
            print()
        k=k+1
if __name__== '__main__':
        main()
