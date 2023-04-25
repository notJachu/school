with open("/home/dawids19e/Pulpit/prace/imprezy.txt") as plik:
    lines = plik. readlines()

print(lines)

hMany = set()

def A():
    for a in lines:
        a = a.split()
        print(a)
        hMany.add(a[0])
        hMany.add(a[1])
    print(len(hMany))


A()