import sys 
sys.stdin = open('input.txt', 'r')  
sys.stdout = open('output.txt', 'w') 

t = int(input())

for _ in range(t):
	a,b,c,d = map(int,input().split())

	print("{} {} {}".format(b,c,d))

