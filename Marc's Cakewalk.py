#!/bin/python3
n = int(input().strip())
calories = list(map(int, input().strip().split(' ')))
calories.sort(reverse = True)
cnt, ans = 0, 0
for c in calories :
    ans += c * 2 ** cnt
    cnt += 1
print(ans) 
