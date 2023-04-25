import math
with open("/home/dawids19e/Pulpit/prace/liczby384.txt") as plik:
    lines = plik.readlines()
print(lines)

p3 = [math.pow(3,i) for i in range(15)]

def A():
    c = 0
    for n in lines:
        n = float(n)
        if n in p3:
            c += 1
    print(c)

def B():
    for n in lines:
        sm = 0
        n = n.rstrip('\n')
        for m in n:
            m = int(m)
            sm += math.factorial(m)
        if sm == int(n):
            print(n)


def C():
    tmp = 0
    gcd = 0
    ln = 0
    for n in lines:
        n = int(n.rstrip('\n'))
        


A()
B()
