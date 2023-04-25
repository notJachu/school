with open("/home/dawids19e/Pulpit/prace/mapa.txt") as p1:
    tiles = p1.readlines()

print(tiles)

num = 50**2 + 50
tmp = [num for a in range(0, 50)]
path = [tmp for b in range(0, 50)]


