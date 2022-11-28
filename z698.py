from math import sqrt, pow
with open("/home/dawids19e/Pulpit/prace/punkty_odcinki.txt") as plik:
    lines = plik.readlines()

odc = 0
lin = 0
dis = 0


def getPoints(points):
    points = points.split()
    x1 = int(points[0])
    y1 = int(points[1])

    x2 = int(points[2])
    y2 = int(points[3])

    px = int(points[4])
    py = int(points[5])

    return x1, y1, x2, y2, px, py


def line(x1, y1, x2, y2):
    a = (y2-y1)/(x2-x1)
    b = y1 - a * x1
    return a, b


def onLine(x1, y1, x2, y2, px, py):
    a, b = line(x1, y1, x2, y2)

    if py - a * px == b:
        return True


def length(x1, y1, x2, y2):
    h1 = x2 - x1
    h2 = y2 - y1

    h1 *= h1
    h2 *= h2

    return sqrt(h1 + h2)


def onSegment(x1, y1, x2, y2, px, py):
    segment = length(x1, y1, x2, y2)
    #print(segment)
    l1 = length(px, py, x1, x2)
    #print(l1)
    l2 = length(px, py, x2, y2)
    #print(l2)

    if onLine(x1, y1, x2, y2, px, py):
        if l1 < segment and l2 < segment:
            return True


def distance(x1, y1, x2, y2, px, py):
    a, b = line(x1, y1, x2, y2)

    c = -1/a
    d = py - c*px

    sx = (d-b)/(a-c)
    sy = a* sx + b

    return length(px, py, sx, sy)


for n in lines:
    x1, y1, x2, y2, px, py = getPoints(n)

    if onLine(x1, y1, x2, y2, px, py):
        lin += 1

    if onSegment(x1, y1, x2, y2, px, py):
        odc += 1

    if not onLine(x1, y1, x2, y2, px, py):
        dis += distance(x1, y1, x2, y2, px, py)

print(lin, odc, dis)
