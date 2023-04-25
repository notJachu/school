with open("/home/dawids19e/Pulpit/prace/labirynt.txt") as plik:
    maze = plik.readlines()

for a in range(0, len(maze)):
    maze[a] = maze[a].rstrip('\n')


print(maze)


def getPath(sx, sy, gx, gy):

    stack = []
    tmp = [False] * 20
    visited = [tmp] * 20
    tmp = [400] * 20
    dst = [tmp] * 20
    dst[0][0] = 0

    stack.append([sx, sy])

    while stack:
        s = stack.pop()
        visited[s[0]][s[1]] = True

        for n in range(-1, 3):
            if ord(maze[sx + n][sy+1]) == '.' and not visited[sx + n][sy + 1]:
                stack.append([sx + n, sy + 1])
                if dst[sx][sy] + 1 < dst[sx + n][sy + 1]:
                    dst[sx + n][sy + 1] = dst[sx][sy] + 1

            if ord(maze[sx + n][sy - 1]) == '.' and not visited[sx + n][sy - 1]:
                stack.append([sx + n, sy - 1])
                if dst[sx][sy] + 1 < dst[sx + n][sy - 1]:
                    dst[sx + n][sy - 1] = dst[sx][sy] + 1

        if ord(maze[sx - 1][sy]) == '.' and not visited[sx - 1][sy]:
            stack.append([sx - 1, sy])
            if dst[sx][sy] + 1 < dst[sx - 1][sy]:
                dst[sx - 1][sy] = dst[sx][sy] + 1

        if ord(maze[sx + 1][sy]) == '.' and not visited[sx + 1][sy]:
            stack.append([sx + 1, sy])
            if dst[sx][sy] + 1 < dst[sx + 1][sy]:
                dst[sx + 1][sy] = dst[sx][sy] + 1

    print(dst[gx][gy])
    print(visited[gx][gy])


getPath(1, 1, 19, 19)
