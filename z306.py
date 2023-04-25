with open("/home/dawids19e/Pulpit/prace/gra.txt") as plik:
    lines = plik.readlines()

for a in lines:
    print(a, end='')
print('\n')

def howMany(x, y):
    count = 0
    for n in range(-1, 2):
        for m in range(-1, 2):
            if n == 0 and m == 0:
                break
            X = int(x) + n
            Y = int(y) + m
            if X < 0:
                X = 19
            if Y <= 0:
                Y = 12
            if lines[Y][X] == 'X':
                count += 1
    return count


def nextGen():
    for k in range(0, 12):
        for l in range(0,20):
            count = howMany(l, k)
            print(count)
            if lines[k][l] == 'X':
                if count == 2 or count == 3:
                    lines[k][l] = '.'

nextGen()