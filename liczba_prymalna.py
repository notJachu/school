with open("/home/dawids19e/Pulpit/prace/prymarne.txt") as plik:
    data = plik.readlines()

for a in range(len(data)):
    data[a] = data[a].rstrip('\n')

print(data)
primes = []

def getPrime():
    chk = [False] * 1001
    i = 2
    while i * i <= 100:
        if not chk[i]:
            j = i*i
            while j <= 1000:
                chk[j] = [True]
                j += i
        i += 1
    for l in range(2, 1000):
        if not chk[l]:
            primes.append(l)


getPrime()

def decode():
    maxN = 0
    minN = 1000
    maxP = data[0]
    minP = data[0]
    for k in data:
        tmp = 1
        for m in range(len(k)):
            tmp *= primes[m] ** int(k[m], 36)
        #print(tmp)
        if tmp >= maxN:
            maxN = tmp
            maxP = k
        elif tmp <= minN:
            minN = tmp
            minP = k

    print(maxP, minP)

for n in range(501, 530):
    

decode()
