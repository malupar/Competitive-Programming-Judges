from yogi import read, tokens
from collections import deque

def bfs(adj: list[list[int]], padre: list[int], capacities: list[list[int]]) -> int:
    n = len(adj)
    PQ: deque[tuple[int, int]] = deque()
    PQ.append((5001, 0))
    while len(PQ) > 0:
        f, act = PQ.popleft()
        
        for followingOne in adj[act]:
            if capacities[act][followingOne] > 0 and followingOne != 0 and padre[followingOne] == -1:
                nextF: int = min(f, capacities[act][followingOne])
                padre[followingOne] = act 
                if followingOne == n-1:
                    return nextF
                PQ.append((nextF, followingOne))

    return 0

def main() -> None:
    for n in tokens(int):
        m: int = read(int)
        cap: list[list[int]] = [[0]*n for _ in range(n)]
        adjList: list[list[int]] = [[] for _ in range(n)]
        for _ in range (m):
            u: int = read(int)
            v: int = read(int)
            c: int = read(int)
            cap[u][v] = c
            adjList[u].append(v)
            adjList[v].append(u)

        
        padre: list[int] = [-1]*n
        f: int = bfs(adjList, padre, cap)
        ans: int = 0
        while f > 0:
            ans += f
            v = n-1
            while v != 0:
                u = padre[v]
                cap[u][v] -= f
                cap[v][u] += f
                v = padre[v]
            padre = [-1]*n
            f = bfs(adjList, padre, cap)
        
        print(ans)

if __name__ == '__main__':
    main()