n=int(input())
arr=set(map(int, input().split()))

narr = set(range(1, n+1))
diff = narr-arr
print(diff.pop())