'''
1328A - Python version

A. Divisibility Problem


You are given two positive integers 𝑎 and 𝑏. In one move you can increase 𝑎 by 1 (replace 𝑎 with 𝑎+1). Your task is to find the minimum number of moves you need to do in order to make 𝑎 divisible by 𝑏. It is possible, that you have to make 0 moves, as 𝑎 is already divisible by 𝑏. You have to answer 𝑡 independent test cases.

'''
import sys

n = int(input())

for i in range(n):
    p, q = map(int,input().split())
    if(p%q>0):
        print(q-(p%q))
    else:
        print(0)


