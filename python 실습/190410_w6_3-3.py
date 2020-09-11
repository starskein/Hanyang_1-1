import imageio

print('bin:\tcount\tpercentage(%)')
img = imageio.imread('carry_grant.jpg')
for i in range(256):
    cnt = 0
    for y in range(675):
        for x in range(1200):
            if i == img[y][x]:
                cnt = cnt + 1
    per = float((cnt / 810000) * 100)
    print('%d\t%d\t%f' % (i, cnt, per))
