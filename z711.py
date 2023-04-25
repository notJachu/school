with open("/home/dawids19e/Pulpit/prace/tekst.txt") as plik:
    txt = plik.readline()

with open("/home/dawids19e/Pulpit/prace/szukane.txt") as plik2:
    tests = plik2.readlines()

tests = [a.rstrip('\n') for a in tests]

print(txt)
print(tests)


def solve():
    print(ord(' '))
    for test in tests:
        chk = 0
        tmp = 0

        for k in test:
            chk += ord(k)
       # print('chk = ', chk)
        for k in range(0, len(test)):
            tmp += ord(txt[k])
       # print('tmp = ', tmp)

        for n in range(0, len(txt) - len(test)):
            if chk == tmp:
                #print(txt[n: n + len(test)])
                if txt[n: n + len(test)] == test:
                    print(test, n)
            tmp += ord(txt[n + len(test)])
            tmp -= ord(txt[n])
            #print(tmp)

solve()
