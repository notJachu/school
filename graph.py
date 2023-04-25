with open("/home/dawids19e/Pulpit/prace/graf1.txt") as g1:
    graph1 = g1.readlines()

for a in range(0, len(graph1)):
    graph1[a] = graph1[a].split()
    graph1[a] = [int(k) for k in graph1[a]]

print(graph1)


def bfs(gr, s):
    stack = []
    checked = [False for a in range(0, len(graph1))]
    stack.append(s)
    checked[s] = True

    while stack:

        s = stack.pop(0)
        print(s, end=" ")

        for i in gr[s]:
            if not checked[i]:
                stack.append(i)
                checked[i] = True

bfs(graph1, 1)

