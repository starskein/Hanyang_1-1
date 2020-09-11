import math
import imageio

img = imageio.imread('HDR.jpg')
height,width = img.shape
print (height,width)

p = [0]*256

for y in range(height):
    for x in range (width):
        b = img[y][x]
        p[b] = p[b] +1;


for x in range(255):
    p[x+1] = p[x+1] + p[x]

for y in range(height):
    for x in range(width):
        img[y][x] = math.floor(255*p[img[y][x]]/(width*height))

imageio.imwrite('New HDR.jpg' , img)