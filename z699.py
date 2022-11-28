def sieve(a, b):
    value = []
    prime = [True for k in range(b + 1)]
    i = 2
    while i * i <= b:
        if prime[i]:
            for n in range(i * i, b + 1, i):
                prime[n] = False
        i += 1
    for p in range(a, b + 1):
        if prime[p]:
            value.append(p)
           #print(p)
    return value


def isPrime(num):
    k = 2
    while k * k <= num:
        if num % k == 0:
            return False
        k += 1
    return True

primes = sieve(2, 30)

for a in primes:
    val = 0
    for n in str(a):
        val += int(n)
    #print(val)
    if isPrime(val):
        print(a)