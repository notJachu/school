with open("/home/dawids19e/Pulpit/prace/obrazek.txt") as painting:
    can = painting.readlines()

with open("/home/dawids19e/Pulpit/prace/wklej.txt") as p2:
    arr = p2.readlines()

tmp = [False for a in range(0, 50)]
covered = [tmp for b in range(0, 50)]


def cover(r, q, c):
    stack = []
    pair = [r, q]
    stack.append(pair)
    searched = can[r][q]
    print(can[r][q])
    tmpL = list(can[r])
    can[r] = tmpL
    tmpL[q] = c
    while stack:
        for n in range(-1, 2):
            for m in range(-1, 2):
                Q = q + m
                R = r + n
                if 0 <= Q < 50 and 0 <= R < 50 and can[R][Q] == searched and not covered[R][Q]:
                    stack.append([R, Q])
                    covered[R][Q] = True



print(arr)
print("\n")

print(can)
print(covered)
cover(3, 7, 'A')