with open("/home/dawids19e/Pulpit/prace/genetyka.txt") as plik:
    lines = plik.readlines()

print(lines)

segmented = []
genes = {
    "A": 0,
    "B": 0,
    "C": 0,
    "D": 0
}

for a in lines:
    n = 2
    a = [a[i:i + n] for i in range(0, len(a) - 2, n)]
    segmented.append(a)

def A():
    count = 0
    for k in segmented:
        for l in k:
            if l != 'BD' and l != 'CA' and l != 'CD' and l != 'DD' and l != 'BC':
                count += 1
                print(k)
                break
    print(count)

A()


def B():
    for k in lines:
        tmp = str(k)
        tmp = tmp.strip()
        for l in tmp:
            genes[l] += 1
    print(genes)


B()

def trans(str):
    out = ''
    for a in str:
        if a == 'A':
            out += 'BD'
        if a == 'B':
            out += 'CA'
        if a == 'C':
            out += 'DD'
        if a == 'D':
            out += 'BC'
    print(out)
    return out


def C():
    cell = 'C'
    for a in range (0, 5):
        cell = trans(cell)

C()