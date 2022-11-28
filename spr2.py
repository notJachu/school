import math
with open("/home/dawids19e/Pulpit/prace/cosinusy.txt") as plik:
    lines = plik.readlines()

dx = 0.01


def A():
    tot = 0.0
    x = 1.0
    for n in lines:
        pair = n.split()
        a = float(pair[0])
        xn = float(pair[1])
        print(pair)
        while x <= xn:
            tmp = 0.0
            x1 = abs(math.cos(a*x)/x)
            x += dx
            x2 = abs(math.cos(a*x)/x)
            tmp = ((x1+x2)*dx)/2
            tot += tmp
    print(tot)

def B():
    for n in lines:
        x = 0.0
        pair = n.split()
        a = float(pair[0])
        xn = float(pair[1])
        ymax = math.cos((a * x) / x)
        while x <= xn:
            y = math.cos((a*x)/x)
            ymax = math.cos((a*x)/x)




A()