import math

with open("/home/dawids19e/Pulpit/prace/odcinki.txt") as plik:
    lines = plik.readlines()

def A():
    tot = 0
    for a in lines:
        a = a.split()
        x1 = int(a[0])
        y1 = int(a[1])
        x2 = int(a[2])
        y2 = int(a[3])
        tmp = pow(x2 - x1, 2) + pow(y2 - x1, 2)
        tmp = math.sqrt(tmp)
        tot = tot + tmp
    print(tot)


def line(x1, y1, x2, y2):
    a = (y2-y1)/(x2-x1)
    b = y1 - a * x1
    return a, b

def getPoints(points):
    points = points.split()
    x1 = int(points[0])
    y1 = int(points[1])

    x2 = int(points[2])
    y2 = int(points[3])

    return x1, y1, x2, y2

def B():
    for n in range(0, 201):
        x1, y1, x2, y2 = getPoints(lines[n])
        a, b = line(x1,y1, x2,y2)


A()
