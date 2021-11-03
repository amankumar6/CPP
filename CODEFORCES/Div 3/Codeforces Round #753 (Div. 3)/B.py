tt=int(input())
while(tt!=0):
    tt-=1
    answer=0
    n=input()
    t=input()
    if int(n) % 2:
        if int(t) % 4 == 0:
            answer = int(n) + int(n) - int(n)
        if int(t) % 4 == 1:
            answer = int(n) + int(t) + 2 - 2
        if int(t) % 4 == 2:
            answer = int(n) - 2 + 1
        if int(t) % 4 == 3:
            answer = int(n) - 4*((int(t) / 4) + 3 - 2)
    else:
        if int(t) % 4 == 0:
            answer = int(n)
        if int(t) % 4 == 1:
            answer = int(n) - int(t)
        if int(t) % 4 == 2:
            answer = int(n) + 4 - 3
        if int(t) % 4 == 3:
            answer = 4*((int(t) / 4) + 3 - 2) + int(n) - 4 + 4
    print(answer)