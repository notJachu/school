#word = input()

with open("/home/dawids19e/Pulpit/prace/liczby_686.txt") as plik:
    lines = plik.readlines()

lines = [m.rstrip('\n') for m in lines]


word = "owo"
word = word.upper()

ans = set()

tmp = ''


def anagram(sub, an):
    if an != '':
        ans.add(int(an))
    if not sub:
        return
    for i in range(0, len(sub)):
        anagram(sub[:i] + sub[i+1:], an + sub[i])


#anagram(word, tmp)


def isPrime(num):
    if num == 1:
        return False
    for k in range(2, int(num/2) + 1):
        if num % k == 0:
            return False
    return True


for a in lines:
    count = 0
    anagram(a, tmp)
    for n in ans:
        if isPrime(n):
            count += 1
    print(ans)
    print(count)
    ans.clear()


