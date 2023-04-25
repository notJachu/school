with open("/home/dawids19e/Pulpit/prace/kolorowy_lancuch.txt") as plik:
    num = plik.readline()
    colors = plik.readline()
    chain = plik.readline()

num = num.split()
colors = colors.split()
colors = [int(a) for a in colors]
chain = chain.split()
n = int(num[0])
m = int(num[1])

print(n, m, '\n')
print(colors, '\n')
print(chain)


d = sum(colors)

print(d)


def solve():
    tmp = 0
    c = 0
    mColSum = 0
    