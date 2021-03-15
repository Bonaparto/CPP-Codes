def solve():
    p, a, b, c = map(int, input().split())
    a1, b1, c1 = False, False, False
    if p % a == 0 or p % b == 0 or p % c == 0:
        print(0)
        return
    x, A, B, C = 1, a, b, c
    while 1:
        if A > p and not a1:
            a1 = True 
            A -= p
        if B > p and not b1:
            b1 = True 
            B -= p
        if C > p and not c1:
            c1 = True 
            C -= p
        if a1 and b1 and c1:
            break
        x += 1
        if not a1:
            A = x * a
        if not b1:
            B = x * b
        if not c1:
            C = x * c
    print(min(A, B, C))
        


for i in range(int(input())):
    solve()