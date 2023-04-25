with open("/home/dawids19e/Pulpit/prace/dane3.txt") as plik:
    lines = plik.readlines()

print(lines)

def sameDigit():
    a = 0
    b = 0
    for n in lines:
        tmp = str(n)
        print(tmp[len(tmp) - 2])
        if tmp[0] == tmp[len(tmp) - 2]:
            a += 1

        tmp = str(int(tmp, 8))

        if tmp[0] == tmp[len(tmp) - 1]:
            b += 1

    print(a, b)

def C():
    maxL = lines[0]
    minL = lines[0]
    for n in lines:
        m = 0
        while m < len(n) - 1:
            if n[m] > n[m + 1]:
                break
            if n >= maxL:
                maxL = n
            else :
                if n <= minL:
                    minL = n
    print(maxL, minL)

sameDigit()
C()
print(lines[0])

