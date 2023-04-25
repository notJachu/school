with open("/home/dawids19e/Pulpit/prace/dane316.txt") as plik:
    lines = plik.readlines()

words = {}

for a in lines:
    if a in words.keys():
        words[a] += 1
    else :
        words[a] = 1

print(words)




k = 0

for n in words.values():
    if n > 1:
        k += 1

print(k)
print(max(words.values()),max(words, key=words.get))


def b():
    m = 0
    for i in lines:
        if int(i, 16) % 2 == 0:
            m += 1
    print(m)

b()