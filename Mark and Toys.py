#!/bin/python3
import string

line1 = input()
line2 = input()
itemNum = int(line1.split()[0])
totalMoney = int(line1.split()[1])
money_string_array = line2.split()
money_set = set()
money = []
for each in (money_string_array):
    money.append(int(each))
money.sort()
sum_money = 0
sum_toy = 0
for each in money:
    if sum_money + each <= totalMoney:
        sum_toy += 1
        sum_money += each
    else:
        break;
print(sum_toy)
