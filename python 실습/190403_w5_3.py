import random
num_list=[]
for i in range(50):
    num_list.append(random.randint(0,1000))
for i in range(50):
    print(num_list[i],end=' ')
print()
print(len(num_list))
def maxcheck(n):
    for i in range(50):
        if num_list[n]<num_list[i]:
            return False
    return True
def mincheck(n):
    for i in range(50):
        if num_list[n]>num_list[i]:
            return False
    return True
for j in range(50):
    if maxcheck(j)==True:
        maximum=num_list[j]
        maxindex=j
for j in range(50):
    if mincheck(j)==True:
        minimum=num_list[j]
        minindex=j
print('maximum=',maximum,'index=',maxindex)
print('minimum=',minimum,'index=',minindex)
for i in range(50):
    for j in range(50):
        if num_list[i]<num_list[j]:
            k=num_list[j]
            num_list[j]=num_list[i]
            num_list[i]=k
print(num_list)