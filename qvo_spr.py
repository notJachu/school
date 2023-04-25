with open("/home/dawids19e/Pulpit/prace/quovadis.txt") as plik:
    text = plik.readlines()

with open("/home/dawids19e/Pulpit/prace/szukane_qvo.txt") as plik2:
    tests = plik2.readlines()

tests = [a.rstrip('\n') for a in tests]
text = [a.rstrip('\n') for a in text]


def solve():
    for test in tests:
        chk = 0
        tmp = 0

        for k in test:
            chk += ord(k)
        # print('chk = ', chk)
        print(len(text))
        for n in range(0, len(text)):
            if len(text[n]) >= len(test):
                for k in range(0, len(test)):
                    tmp += ord(text[n][k])

                for l in range(0, len(text[n]) - len(test)):
                    if chk == tmp:
                        print("ok")
                        #if text[n][l: l + len(test)] == test:
                        print("Test: " + test + " ; Linia: " + str(l) + " ; Kolumna: " + str(n))

                    tmp += ord(text[n][l + len(test)])
                    tmp -= ord(text[n][l])


# print(text)
# print(tests)


solve()
