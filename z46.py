with open("/home/dawids19e/Pulpit/prace/liczby_46.txt") as plik:
    lines = plik.readlines()

count0 = 0
count1 = 0
countAll = 0
d2 = 0
d8 = 0

for a in lines:
    for b in a:
        if b == '0':
            count0 += 1
        else:
            count1 += 1
    if count0 >= count1:
        countAll += 1

    if a[-1:] == '0':
        d2 += 1

    if a[-3:] == '000':
        d8 += 1
    count0 = 0
    count1 = 0
print(lines[0])
print(countAll, d2, d8)