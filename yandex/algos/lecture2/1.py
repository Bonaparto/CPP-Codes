word = input()
symcnt = {}
for sym in word:
    if sym not in symcnt:
        symcnt[sym] = 0
    symcnt[sym] += 1
lst = []
for sym in sorted(symcnt.keys()):
    lst.append(sym)
    lst.append(str(symcnt[sym]))
print(''.join(lst))