with open("/home/dawids19e/Pulpit/prace/flawiusz_napisy.txt") as file:
    lines = file.readlines()

for a in range(len(lines)):
    lines[a] = lines[a].split()
    lines[a][0] = list(lines[a][0])

print(lines[0][0])


def last_letters(r, k, txt):
    k -= 1
    tmp = k
    while len(txt) > r:
        print(len(txt))
        print(f"removed: {txt[tmp]} with id {tmp}")
        txt.pop(tmp)
        tmp = (tmp + k) % len(txt)

    res = "".join(txt)
    return res


k = last_letters(2, int(lines[0][1]), lines[0][0])

print(k)