import imageio
import statistics
img = imageio.imread('carry_grant.jpg')
all=0
o=0
arr=[]
for y in range(675):
    for x in range(1200):
        arr.append(img[y][x])
        all=all+img[y][x]
avg=all/810000
for y in range(675):
    for x in range(1200):
        o=o+(avg-img[y][x])*(avg-img[y][x])
variance=o/810000
print('avg:',avg)
print('variance',variance)
print('max:',max(arr))
print('median:',statistics.median(arr))
print('min:',min(arr))