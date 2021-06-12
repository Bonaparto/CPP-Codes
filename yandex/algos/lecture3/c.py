a, b = map(int, input().split())
s, s1 = set(int(input()) for i in range(a)), set(int(input()) for i in range(b))
s2 = s.intersection(s1)
print(len(s2))
print(*sorted(s2))
s = s - s2
print(len(s))
print(*sorted(s))
s1 = s1 - s2
print(len(s1))
print(*sorted(s1))