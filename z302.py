import math

with open("/home/dawids19e/Pulpit/prace/punkty.txt") as plik:
    lines = plik.readlines()

pairs = []

gPi = math.pi
gPi = round(gPi, 4)

for k in lines:
    line = k.split()
    pair = int(line[0]), int(line[1])
    pairs.append(pair)

#print(pairs)

def A():
    count = 0
    for a in pairs:
        dis = (a[0] - 200)*(a[0] - 200) + (a[1] - 200)*(a[1] - 200)
        if dis == 40000:
            print(a[0], a[1])
        elif dis < 40000:
            count += 1
    print(count)


def B(sz):
    nk = 0
    #pi = Pk*n2/n1*r^2
    for a in range(0, sz):
        dis = (pairs[a][0] - 200) * (pairs[a][0] - 200) + (pairs[a][1] - 200) * (pairs[a][1] - 200)
        if dis <= 40000:
            nk += 1

    n = sz
    pi = float(4*(nk/n))
    #print(pi)
    return pi

def C():
    fileLine = ''
    with open("/home/dawids19e/Pulpit/prace/piDiff.txt", 'w') as plot:
        for a in range(1, 1701):
            tmp = B(a)
            tmp = abs(gPi - tmp)
            tmp = round(tmp, 4)
            fileLine = str(a) + ";" + str(tmp)
            print(fileLine)
            plot.write(fileLine)
            plot.write('\n')


A()
B(5000)
print(gPi)
C()