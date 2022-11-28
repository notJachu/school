with open("/home/dawids19e/Pulpit/prace/przyklad.txt") as plik:
    lines = plik.readlines()

gMax = int(lines[0].split()[0])
gMin = int(lines[0].split()[0])

def findMaxMin(str):
    lMax = int(str[0])
    lMin = int(str[0])
    for n in str:
        n = int(n)
        if n > lMax:
            lMax = n
        if n <= lMin:
            lMin = n
    return(lMax, lMin)


def A(arr, gMax, gMin):
    tmpMax = int(lines[0].split()[0])
    tmpMin = int(lines[0].split()[0])
    for j in arr:
        j = j.split()
        tmpMax, tmpMin = findMaxMin(j)
        if tmpMax >= gMax:
            gMax = tmpMax
        if tmpMin <= gMin:
            gMin = tmpMin
    print(gMax, gMin)


def D(arr):
    longestLine = 0
    tmp = 1
    tablioca  = []
    for m in range(0, 200):
        tablioca.append(arr[m].split())
    for n in range(0, 320):
        for k in range(0, 199):

            if int(tablioca[k][n]) == int(tablioca[k + 1][n]):
                tmp += 1
            else:
                if tmp >= longestLine:
                    longestLine = tmp
                tmp = 1
    print(longestLine)

A(lines, gMax, gMin)
D(lines)

