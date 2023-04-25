with open("/home/dawids19e/Pulpit/prace/liczby_modulo.txt") as plik:
    lines = plik.readlines()

print(lines)


print("A: iterowanie od i = 2 do i == B i wyliczanie reszty z dzielenia A oraz B przez i aż A mod i == B mod i")
for a in range(2, 156):
    if 193 % a == 156 % a:
        print(a)
        break

print("B: aby znaleźć liczbę mniejszą niż znalexiona wystarczy iterować od i == znalezionaLiczba do i == 2 i robić tą sama operację co w A")
for a in range(171, 2, -1):
    if 171 % a == 122 % a:
        print(a)
print("najpierw znaleziono 49 a następnie 7")

def c():
    ans = []
    for m in range(1, 2000):
        print(m)
        for i in range(2, int(tmp[1])):

            if int(tmp[0]) % i == int(tmp[1]) % i:
                ans.append(int(tmp[0]) % i)
                break
    print(len(ans), len(lines))

c()