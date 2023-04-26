with open("/home/dawids19e/Pulpit/prace/imprezy_taneczne.txt") as file:
    lines = file.readlines()

data = []

for a in range(1, len(lines) - 2, 2):
    tmp = lines[a].split()
    x = tmp[1]
    y = tmp[2]
    st = lines[a + 1]
    data.append([x, y, st])

print(data[0])


def last(s, k, txt):
    k -= 1
    s -= 1
    cnt = (s + k) % len(txt)
    while len(txt) > 1:
        print(len(txt))
        print(f"removed: {txt[cnt]} with id {cnt}")
        txt.pop(cnt)

        cnt = (cnt + k) % len(txt)

    res = "".join(txt)
    return res

names = []

#for a in data:
    #win = last(int(a[0]), int(a[1]), a[2].split())
    #print(win)
    #names.append(win)

#names.sort()
#print(names)
#print(len(names))
#print(len(data))


test = [5, 3, ["p1", "p2", "p3", "p4", "p5", "p6", "p7"]]

print(last((test[0]), int(test[1]), test[2]))

