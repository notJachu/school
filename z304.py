with open("/home/dawids19e/Pulpit/prace/dane_2.txt") as plik:
    lines = plik.readlines()

with open("/home/dawids19e/Pulpit/prace/dane_3.txt") as plik2:
    lines2 = plik2.readlines()

pairs = []
words = []

for a in lines:
    a = a.split()
    a[1] = int(a[1])
    #print(a)
    pairs.append(a)

#print(pairs)

for a in lines2:
    a = a.split()
    words.append(a)


def decode(code, key):
    decoded = ""
    key = key % 26
    for n in range(0, len(code)):
        #print(code[n])
        tmp = ord(code[n])
        #print(tmp)
        tmp = tmp - key
        if tmp < 65:
            tmp += 26
        #print(tmp)
        decoded += chr(tmp)
    print(decoded)
    return decoded


decode(pairs[0][0], pairs[0][1])


def findKey(pair):
    key = ord(pair[1][0]) - ord(pair[0][0])
    if key < 0:
        key += 26
    print(key)
    decode(pair[1], key)

findKey(words[0])