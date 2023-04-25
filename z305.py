# 0010    0101    1000    1110    0010    0101    1000    1110

with open("/home/dawids19e/Pulpit/prace/binarne.txt") as plik:
    lines = plik.readlines()

segmented = []

for a in lines:
    n = 4
    a = [a[i:i + n] for i in range(0, len(a) - 2, n)]
    segmented.append(a)


# print(segmented)

def A(arr):
    for j in arr:
        arr.remove(j)
        if j in arr:
            print("true")
            return True


# A(segmented[0])

def isGood(arr):
    for m in arr:
        if int(m, 2) >= 9:
            return False
    return True


def B(arr):
    for k in arr:
        if isGood(k):
            print("yes")
        else:
            print("no")


def C(arr):
    max10 = 0
    binNum = ''
    for k in arr:
        for m in k:
            binNum += m
        if max10 <= int(binNum, 2) < 65535:
            max10 = int(binNum, 2)
        binNum = ''
    print(max10, " ", bin(max10))


# B(segmented)
C(segmented)
