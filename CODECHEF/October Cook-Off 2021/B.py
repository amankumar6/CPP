# cook your dish here
tc = int(input())

for _ in range(tc):
    n = int(input())
    scores = list(map(int, input().split()))
    bbb = 0

    for i in range(n):
        gg, ll = 0, 0
        for j in range(n):
            if i != j:
                if scores[i] >= scores[j]:
                    gg += 1
                else:
                    ll += 1
        if gg >= ll:
            bbb += 1

    print(bbb)