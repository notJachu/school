#0010    0101    1000    1110    0010    0101    1000    1110

with open("/home/dawids19e/Pulpit/prace/binarne.txt") as plik:
    lines = plik.readlines()

segmented = []

for a in lines:
    n = 4
    a = [a[i:i + n] for i in range(0, len(a) - 2, n)]
    segmented.append(a)

#print(segmented)

def A(arr):
    for j in arr:
        arr.remove(j)
        if j in arr:
            print("true")
            return True


#A(segmented[0])


