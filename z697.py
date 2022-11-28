import math

with open("/home/dawids19e/Pulpit/prace/wielokaty.txt") as plik:
    lines = plik.readlines()


def getArea(arr):
    length = int(arr[0])
    total = 0
    i = 1
    while i < (length * 2) - 2:
        x1 = int(arr[i])
        y1 = int(arr[i + 1])
        x2 = int(arr[i + 2])
        y2 = int(arr[i + 3])
        #print(total)
        total = total + ((y1 + y2)*(x2 - x1))/2
        i = i+2
    x2 = int(arr[1])
    y2 = int(arr[2])
    x1 = int(arr[len(arr) - 2])
    y1 = int(arr[len(arr) - 1])
    #print(total)
    total = total + ((y1 + y2)*(x2 - x1))/2
    return total

def getLen(arr):
    length = int(arr[0])
    total = 0
    i = 1
    while i < (length*2) - 2:
        x1 = int(arr[i])
        y1 = int(arr[i + 1])
        x2 = int(arr[i + 2])
        y2 = int(arr[i + 3])
        #print(total)
        total = total + math.sqrt(pow(x2-x1, 2) + pow(y2-y1, 2))
        i = i+2
    x2 = int(arr[1])
    y2 = int(arr[2])
    x1 = int(arr[len(arr) - 2])
    y1 = int(arr[len(arr) - 1])
    #print(total)
    total = total + math.sqrt(pow(x2-x1, 2) + pow(y2-y1, 2))
    return total

#a = "3 2 5 6 4 3 2"

#72  -18

print(lines[0].split())
#print(getArea(a.split()))
#print(getLen(a.split()))

highest = 0
tmp = 0
tmp = getArea(lines[0].split())
print(tmp/getLen(lines[0].split()))

for a in lines:
    #print(a.split())
    tmp = getArea(a.split())
    if tmp > highest:
        highest = tmp
print(highest)