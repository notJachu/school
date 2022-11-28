#pesel = input()
pesel = '75121968629'

w = [1, 3, 7, 9, 1, 3, 7, 9, 1, 3]

def isValid(num):
    con = 0
    tmp = 0
    for a in range(0, 10):
        tmp = int(pesel[a]) * w[a]
        con += tmp
    print(con)
    if con % 10 == 0:
        con = 0
    else:
        con = 10 - con % 10
        print(con)
    if con == int(pesel[10]):
        print('true')
    else:
        print('false')
isValid(pesel)