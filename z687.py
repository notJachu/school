with open("/home/dawids19e/Pulpit/prace/idole.txt") as plik:
    lines = plik.readlines()

lines = [i.split(" ") for i in lines]

sets = []
for a in range(0, len(lines) - 1):
    line = [int(m) for m in lines[a]]
    sets.append(line)

#print(sets)

def getDom():
    count = {}
    for l in sets:
        n = l[0]
        for k in range(1, n):
            if l[k] in count:
                count[l[k]] += 1
            else:
                count[l[k]] = 1
                