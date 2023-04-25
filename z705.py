with open("/home/dawids19e/Pulpit/prace/705_test.txt") as plik:
    lines = plik.readlines()

lines = [a.rstrip('\n') for a in lines]

print(lines)


def A():
    maxN = int(lines[0])
    maxL = 0
    tmp = 0
    n = 0
    while n < len(lines):
        tmp += int(lines[n])
        if tmp >= maxN:
            maxN = tmp
            maxL += 1
        if tmp <= 0:
            tmp = 0

        n += 1
    print(maxN, maxL)


def B():
    num = 0
    minN = 0
    l = 0
    for a in range(0, round(len(lines) / 2)):
        num += int(lines[a])
    print(num)
    for a in range(0, round(len(lines) / 2)):
        if num <= minN:
            minN = num
            l = (a + round(len(lines) / 2) - 1)
        num -= int(lines[a])
        num += int(lines[a + round(len(lines) / 2)])
    print(minN, l)


A()
B()
