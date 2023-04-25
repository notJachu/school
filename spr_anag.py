with open("/home/dawids19e/Pulpit/prace/liczby_spr.txt") as plik:
    lines = plik. readlines()

chk = lines.copy()
print(lines)
print(chk)

def A():
    num = max(lines)
    print(num, int(num, 2))

def B():
    count = 0
    c0 = 0
    c1 = 0
    for n in range(0, 1000):
        m = str(lines[n])
        #print(n)
        for k in m:
            if k == '1':
                c1 += 1
            else:
                c0 += 1
        t0 = 0
        t1 = 0
        chk.remove(lines[n])
       # print(len(chk))
        for a in chk:
            for k in a:
                if k == '1':
                    t1 += 1
                else:
                    t0 += 1
            if c0 == t0 and c1 == t1:
                count += 1
            t0 = 0
            t1 = 0
        c0 = 0
        c1 = 0
        #print(c1,c0)

    print(count)

A()
B()