x = 0
del = 0.1

def horner(w, x):
    result = 0
    for i in w:
        result = result * x + i
    return result

with open("/home/dawids19e/Pulpit/prace/calki.txt") as plik:
    lines = plik.readlines()

for i in lines:
    j = 1
